// SUM OF DIGIT 
#include<stdio.h>
int main()
{
    int num;
    int digit;
    int sum=0;
    printf(" enter the number:");
    scanf("%d",&num);
    while(num>0)
        {            // BRACKET NA LAGANE PE PROGRAM SAHI SE NAHI CHALTA HAI
        digit=num%10;
    sum=sum+digit;
    num=num/10;
        }
    printf("Sum of digit is:%d\n",sum);
    return 0;
}
