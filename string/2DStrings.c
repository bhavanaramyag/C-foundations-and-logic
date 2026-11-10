#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of strings : ");
    scanf("%d", &n);
    char s1[n][50]; 
    for(int i = 0; i < n; i++)
    {
        printf("enter string %d = ", i + 1);
        scanf("%s", s1[i]); // s1[i] acts as the pointer/address for row i
    }
    printf("\n--- The Strings You Entered ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("string %d : %s\n", i + 1, s1[i]);
    }
    return 0;
}
