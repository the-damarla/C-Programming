#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,k,r1,r2,c1,c2,sum=0;
    int a[100][100]={0};
    int b[100][100]={0};
    int c[100][100]={0};
    printf("Enter 1st matrix nNo. of rows :");scanf("%d",&r1);
    printf("Enter 1st matrix nNo. of columns :");scanf("%d",&c1);
    printf("Enter 1st matrix nNo. of rows :");scanf("%d",&r2);
    printf("Enter 1st matrix nNo. of columns :");scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("NOT POSSIBLE");
    }
    else
    {
        printf("enter 1st array elements :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter 2nd array elements :\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("*********MULTIPLICATION***********\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c2;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);

                }
                c[i][j]=sum;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
