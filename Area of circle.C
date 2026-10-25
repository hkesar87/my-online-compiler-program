#include<stdio.h>
int main()
{
    int r;
    int area;
    int pie=3.14;
    printf("Enter the radius:");
    scanf("%d",&r);
    area=pie*r*r;
    printf("Area of circle is=%d",area);
    return 0;
}
