#include <stdio.h>
void read(char s1[], int n);
void display(char s1[], int n);
int length(char *str);
int main() {
    int n;
    printf("Enter the maximum size of the string = ");
    scanf("%d", &n);
    char s1[n];
    read(s1, n);
    display(s1, n);
    int len = length(s1);
    printf("Length of the string = %d\n", len);
    return 0;
}

void read(char s1[], int n) 
{
    getchar();
    printf("Enter the string: ");
    fgets(s1, n, stdin);
}
void display(char s1[], int n) 
{
    printf("The string: %s", s1);
}

int length(char *str) 
{
    int len = 0;
    while (*str != '\0') 
    {
        len++;
        str++;            
    }
    return len;
}
