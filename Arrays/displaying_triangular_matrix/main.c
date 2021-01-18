#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,r,c,ch;
    int a[100][100]={0};
    printf("enter no. of rows");scanf("%d",&r);
    printf("enter no. of columns :");scanf("%d",&c);
    if(r==c)
    {
        printf("enter array elements :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("for lower enter 1 or enter 2 for upper :");scanf("%d",&ch);
        if(ch==1)
        {
            for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               if(i>j)
                    {
                        a[i][j]=0;
                    }
            }
        }
        }
        else if(ch==2)
        {
            for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               if(i<j)
                    {
                        a[i][j]=0;
                    }
            }
        }
        }
        else{printf("CHOICE IS WRONG");}
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("NOT POSSIBLE");
    return 0;
}
