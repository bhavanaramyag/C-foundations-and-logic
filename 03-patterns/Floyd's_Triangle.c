#include<stdio.h>
int main()
{
  int i,j,n1,n2 = 1;
  printf("enter no. of rows = ");
  scanf("%d", &n1);
  for(i = 1; i <= n1; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("%d ",n2);
      n2++;
    }
    printf("\n");
  }
  return 0;
}
