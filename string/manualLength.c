#include<stdio.h>
int read(char s[], int len);
void display(char s[]);
int count(char s[]);
int main()
{
    char s[100];
    read(s,100);
    display(s);
    printf("count of string = %d", count(s));
    return 0;
}
int read(char s[], int len)
{
    int i = 0;
    char ch;
    printf("enter the string:");
    while(i < len - 1 && (ch = getchar()) != '\n' && ch != EOF)
    {
        s[i] = ch;
        i++;
    }
    s[i] != '\0';
    return i;
}
void display(char s[])
{
    int i = 0;
    printf("string : ");
    while(s[i] != 0)
    {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
}
int count(char s[]) {
    int c = 0;
    while (s[c] != '\0')
    {
        c++;
    }
    return c;
}
