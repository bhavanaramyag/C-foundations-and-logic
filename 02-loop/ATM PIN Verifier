#include<stdio.h>
int main()
{
    int pin, attempt=3;
    const int correctPin=1649;
    do
    {
        printf("enter your 4-digit PIN= ");
        scanf("%d",&pin);
        if(pin==correctPin)
        {
            printf("Access granted! Welcome\n");
            return 0;
        }
        else
        {
            attempt--;
            printf("incorrect PIN\nattempt left=%d\n", attempt);
        }
    }
    while(attempt>0);
    {
        printf("Card Blocked! Too many incorrect attempts\n");
    }
    return 0;
}
