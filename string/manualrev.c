#include<stdio.h>
int read(char s[], int len);
void display(char s[]);
void rev(char s1[]);
int main()
{
    char s[100],s1[100];
    read(s,100);
    display(s);
    rev(s);
    printf("reverse : %s", s);
    return 0;
}
int read(char s[], int len)
{
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
    int i = 0;
    while(s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
}
void rev(char s[])
{
    int len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    int left = 0;
    int right = len - 1;
    while(left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        right--;
        left++;
    }
}
