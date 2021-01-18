#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,r,c,suml=0,sumr=0;
    int a[100][100]={0};
    printf("enter no. of rows :");scanf("%d",&r);
    printf("enter no. of columns :");scanf("%d",&c);
    printf("enter array elements :");
    if(r==c)
    {
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
                if(i==j)
                {
                    suml=suml+a[i][j];
                }
            }
        }
        for(i=0;i<r;i++)
        {
            sumr=sumr+a[i][r-1];
        }
        printf("\nSum of left diagonal elements : %d",suml);

        printf("\nSum of right diagonal elements : %d",sumr);
    }
    else
    {
        printf("NO DIAGNOL RECOGNIZED");
    }
    return 0;
}
