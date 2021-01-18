#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,r,c,temp;
    int a[100][100]={0};
    printf("enter No. of rows of the array :");scanf("%d",&r);
    printf("enter no. of columns :");scanf("%d",&c);
    printf("enter array elements :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<i;j++)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    else if(r>c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>j)
                {
                    temp=a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=temp;
                }
            }
        }
    }
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i<j)
                {
                    temp=a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=temp;
                }
            }
        }
    }

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
         printf("%d\t",a[i][j]);
        }printf("\n");
    }

    return 0;
}
