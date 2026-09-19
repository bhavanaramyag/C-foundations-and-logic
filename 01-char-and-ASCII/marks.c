#include<stdio.h>
int main()
{
    float m1,m2,m3,total,avg,percentage;
    printf("enter 1st subject marks = ");
    scanf("%f", &m1);
    printf("enter 2nd subject marks = ");
    scanf("%f", &m2);
    printf("enter 3rd subject marks = ");
    scanf("%f", &m3);
    total=m1+m2+m3;
    printf("total marks = %f\n", total);
    avg= (total)/3;
    printf("avg = %f\n", avg);
    percentage= (total / 300) * 100;
    printf("percentage = %f\n", percentage);
}
