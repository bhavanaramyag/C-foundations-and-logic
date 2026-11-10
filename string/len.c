#include <stdio.h>

int main() {
    char str[] = "BVRIT";
    char *p = str; // p points to the first character ('B')
    int len = 0;
    
    // Loop until we hit the null terminator ('\0')
    while (*p != '\0') {
        len++;
        p++; // Move pointer forward to the next character address
    }
    
    printf("Length of string: %d", len); // Output: Length of string: 5
    return 0;
}
