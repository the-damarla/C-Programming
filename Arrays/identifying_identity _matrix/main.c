#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,count=0,r,c;
    int a[100][100]={0};
    printf("enter no. of rows : ");scanf("%d",&r);
    printf("enter no. of columns : ");scanf("%d",&c);
    if(r==c)
    {
        printf("enter array elements :");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
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
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    if(a[i][j]==1)
                    {
                        count++;
                    }
                }
                else
                {
                    if(a[i][j]==0)
                    {
                        count++;
                    }
                }
            }
        }
        if(count==(r*r))
        {
            printf("\n is an identity matrix");
        }
        else
            printf("\n Not an identity matrix");

    }
    else
        printf("Not Possible");
    return 0;
}
