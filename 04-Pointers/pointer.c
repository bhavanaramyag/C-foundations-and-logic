#include <stdio.h>
int main()
{
    int num = 45;
    int *ptr = &num;
    printf("1. Value of num: %d\n", num);
    printf("2. Address of num (&num): %p\n", &num);
    printf("3. Value stored in ptr: %p\n", ptr);
    printf("4. Value at address pointed by ptr (*ptr): %d\n", *ptr);
    return 0;
}
