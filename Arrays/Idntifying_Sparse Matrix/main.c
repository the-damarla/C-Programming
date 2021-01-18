#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,r,c,count=0;
    int a[100][100]={0};
    printf("enter no. of Rows :");scanf("%d",&r);
    printf("enter no. of columns :");scanf("%d",&c);
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
                if(a[i][j]==0)
                {
                    count++;
                }
            }
        }
        if(count>r)
        {
            printf("SPARSE MATRIX");
        }
        else
            printf("Normal Matrix");
    }
    else
        printf("NOT POSSIBLE");
    return 0;
}
