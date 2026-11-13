#include <stdio.h>
int checkPalindrome(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    if (*end == '\n') {
        *end = '\0';
        end--;
    }
    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    int n = 50;
    char s1[n];
    printf("Enter a string: ");
    fgets(s1, n, stdin);
    if (checkPalindrome(s1))
    {
        printf("The string is a PALINDROME.\n");
    } else
    {
        printf("The string is NOT a palindrome.\n");
    }
    return 0;
}
