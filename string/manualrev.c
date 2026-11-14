#include <stdio.h>
void manual_strrev(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    while (*end != '\0')
    {
        end++;
    }
    end--;
    if (*end == '\n')
    {
        end--;
    }
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char s1[50];
    printf("Enter a string to reverse: ");
    fgets(s1, sizeof(s1), stdin);
    manual_strrev(s1);
    printf("Reversed string: %s\n", s1);
    return 0;
}
