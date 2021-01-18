#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,c=0,sum=0,max=0;
    int a[100]={0};
    printf("enter size of array :");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2+1;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            if(c==n/2+1)
            {
                c=0;
                break;
            }
            else
            {
                printf("%d\t",a[j]);
                sum=sum+a[j];
                c++;
            }
        }
        printf("\n");
        printf("The sum of sub-Array is : %d \n",sum);
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("\n\n the greatest sum found is %d",max);
    return 0;
}
