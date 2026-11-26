#include<stdio.h>
int read(char s[], int len);
void display(const char *s);
int length(const char *s);
int main()
{
    char s[100];
    read(s, 100);
    display(s);
    printf("Length (pointers): %d\n", length(s));
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
void display(const char *s)
{
    const char *p = s;
    while(*p != '\0')
    {
        putchar(*p);
        p++;
    }
    putchar('\n');
}
int length(const char *s)
{
    const char *p = s;
    while (*p != '\0') {
        p++;
    }
    return (int)(p - s);
}
