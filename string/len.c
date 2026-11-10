#include <stdio.h>

int main() {
    char str[] = "BVRIT";
    char *p = str; 
    int len = 0;
    while (*p != '\0')
    {
        len++;
        p++; 
    }
    
    printf("Length of string: %d", len);
    return 0;
}
