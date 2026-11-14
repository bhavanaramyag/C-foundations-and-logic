#include <stdio.h>
void manual_strcpy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
int main()
{
    char source[50];
    char destination[50];
    printf("Enter a source string to copy: ");
    fgets(source, sizeof(source), stdin);
    manual_strcpy(destination, source);
    printf("Copied string (destination): %s", destination);
    return 0;
}
