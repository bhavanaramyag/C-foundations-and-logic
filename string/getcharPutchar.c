#include<stdio.h>
#include<string.h>
int read(char a[], int maxLen);
void display(char a[]);
int main()
{
    char str[100];
    read(str, 100);
    display(str);
    return 0;
}
int read(char a[], int maxLen)
{
    int i = 0;
    char ch;
    printf("enter a string : ");
    while(i < maxLen - 1 && (ch = getchar()) != '\n' && ch != EOF)
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
    printf("string: ");
    while(a[i] != '\0')
    {
        putchar(a[i]);
        i++;
    }
    putchar('\n');
}
