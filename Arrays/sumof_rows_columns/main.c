#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,r,c,sumr=0,sumc=0,sum1=0,sum2=0;
    int a[100][100]={0};
    printf("enter no. of rows :");scanf("%d",&r);
    printf("enter no. of rows :");scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n******GIVEN ARRAY*******\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        sumr=0;
        for(j=0;j<c;j++)
        {
            sumr=sumr+a[i][j];
            sum1=sum1+a[i][j];
        }
        printf("%d th row's sum is %d\n",i,sumr);
    }
    printf("\nThe sum of elements in row : %d \n",sum1);
    for(i=0;i<r;i++)
    {
        sumc=0;
        for(j=0;j<c;j++)
        {
            sumc=sumc+a[j][i];
            sum2=sumc+a[j][i];
        }
        printf("%d column sum is %d\n",i,sumc);
    }
    printf("\nThe sum of elements in the columns is : %d ",sum2);

    return 0;
}
