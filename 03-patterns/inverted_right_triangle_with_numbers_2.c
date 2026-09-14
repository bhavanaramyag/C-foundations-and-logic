#include<stdio.h>
int main()
{
  int i, j, n1;
  printf("no. of rows = ");
  scanf("%d", &n1);
  for( i = n1 ; i >= 1 ; i--)
  {
    for( j = 1 ; j <= i ; j++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}
