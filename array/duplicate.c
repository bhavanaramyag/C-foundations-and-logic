#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
void dup(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    dup(a,b);
    return 0;
}
void read(int a[], int b)
{
    printf("enter the elements : ");
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int b)
{
    printf("array : ");
    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}
void dup(int a[], int b)
{
  int n, occ;
  for(int i = 0; i < b; i++)
  {
      n = a[i];
      int seen = 0;
      for(int j = 0; j < i ; j++)
      {
          if(a[j] == n)
          {
             seen = 1;
             break;
          }
          if(seen == 1)
          {
            continue;
          }
      }
      for(int k = 0; k < b; k++)
      {
         if(a[k] == n)
         {
            occ++;
         }
      }
     if(occ >= 2)
     {
        printf("\n%d occurs %d times",n, occ);
     }
  }
}
