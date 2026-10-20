#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        printf("a is largest");
    else if(a>c)
        printf("c is largest");
    if(b>c)
        printf(" b is largest");
    else
        printf("c is largest");
    return 0;
}
