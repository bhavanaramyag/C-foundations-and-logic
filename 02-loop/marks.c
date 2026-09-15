#include<stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, total, average, percentage;
    printf("Enter marks of 5 subjects (out of 100 each): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0f;
    percentage = (total / 500.0f) * 100.0f;
    
    printf("Total Marks = %.2f / 500\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);
}
