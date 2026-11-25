#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int replace(int a[], int b);
void sort(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array : ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    replace(a,b);
    sort(a,b);
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
    printf("enter the elements : ");
    for(int i = 0; i < b; i++)
    {
        printf("%d", &a[i]);
    }
}
int replace(int a[], int b)
{
   int idx, c;
   printf("enter index : ");
   scanf("%d", &idx);
   printf("enter element : ");
   scanf("%d", &c);
   if(idx < 0 || idx >= b)
   {
      printf("Invalid index");
   }
   a[idx] = c;
   display(a,b);
   return b;
}
void sort(int a[], int b)
{
   printf("sorted array:\n");
   for(int i = 0; i < b - 1; i++)
   {
       for(int j = 0; j < b - 1 - i ; j++)
       {
          if(a[j] > a[j + 1])
          {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1} = a[j];
          }
       }
   }
}
