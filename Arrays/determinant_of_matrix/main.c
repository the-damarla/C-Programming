#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,r,c,det=0;
    int a[100][100]={0};
    printf("enter no. of rows :");scanf("%d",&r);
    printf("enter no. of columns :");scanf("%d",&c);
    if(r==c)
    {
        if(c==2)
        {
            printf("Enter array elements :\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            det=det+(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
            printf("\n the det is : %d",det);
        }
        else if(c==3)
        {
            printf("enter array elements :\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            for(i=0;i<r;i++)
            {
                det=det+(a[0][i]*((a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3])));
            }
            printf("\n the det is : %d",det);

        }
    }
    else
        printf("NOT POSSIBLE    :-\"");
    return 0;
}
