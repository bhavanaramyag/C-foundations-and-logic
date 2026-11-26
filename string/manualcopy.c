#include<stdio.h>
int read(char s[], int len);
void display(char s[]);
void copy(char s[], char s1[], int len);
int main()
{
    char s[100],s1[100];
    read(s,100);
    display(s);
    copy(s,s1,100);
}
int read(char s[], int len)
{
    printf("enter string: ");
    int i = 0;
    char ch;
    while(i < len - 1 && (ch = getchar()) != '\n' && ch != EOF)
    {
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    return i;
}
void display(char s[])
{
    printf("string: ");
    int i = 0;
    while(s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
}
void copy(char s[], char s1[], int len)
{
    int i = 0;
    while(i < len - 1 && s[i] != '\0')
    {
        s1[i] = s[i];
        i++;
    }
    s1[i] = '\0';
    printf("copied string : %s", s1);
}
