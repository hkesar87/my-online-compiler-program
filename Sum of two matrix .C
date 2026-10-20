#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter values for a[3][3] matrix:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("First square matrix is\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d",a[i][j]);
            printf("\n");
            
        }
    printf(" Enter values for b[3][3] matrix:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    printf(" Second square matrix is\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d",b[i][j]);
            printf("\n");
        }
    printf(" Matrix addition of square matrix is\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
   // printf("Sum of square matrix is\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        printf("%d",c[i][j]);
    printf("\n");
    return 0;
}
