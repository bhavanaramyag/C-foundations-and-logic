#include<stdio.h>
int main()
{
    float x = 4;
    float *ptr = &x;
    (*ptr)++;
    printf("pointer incremented = %f", *ptr);
}
