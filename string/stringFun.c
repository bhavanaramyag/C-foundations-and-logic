#include<stdio.h>
#include<string.h>
int read(char a[], int len);
void display(char a[]);
int main()
{
    char str[100];
    char s[100];
    char s1[100];
    read(str, 100);
    display(str);
    printf("length of %s is %d\n", str, strlen(str));
    printf("strcpy : %s\n", strcpy(s, str));
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    if(n > 1 && n < 100)
    {
       strncpy(s, str, n);
       s[n] = '\0';
       printf("strncpy : %s", s);
    }
    else
    {
        printf("Invalid n");
    }
    if (strlen(s1) + strlen(str) < 100) {
        strcat(s1, str);
        printf("\nstrcat : %s\n", s1);
    } else {
        printf("Not enough space for strcat\n");
    }
    printf("strcmp : %d\n", strcmp(s1, str));
    char ch;
    printf("enter the char : ");
    scanf(" %c", &ch);

    char *found = strchr(str, ch);
    if (found != NULL) {
        printf("strchr : %s\n", found);
    } else {
        printf("strchr : character '%c' not found\n", ch);
    }
    return 0;
}
int read(char a[], int len)
{
    int i = 0;
    char ch;
    printf("enter string : ");
    while(i < len - 1 && (ch = getchar()) != '\n' && ch != EOF)
    {
        a[i] = ch;
        i++;
    }
    a[i] = '\0';
    return i;
}
void display(char a[])
{
    int i = 0;
    printf("string:");
    while(a[i] != '\0')
    {
        putchar(a[i]);
        i++;
    }
    putchar('\n');
}
