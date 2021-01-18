#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,temp,c;
    int a[100]={0};
    printf("enter size of the array :");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        c=i;
        for(j=0;j<n;j++)
        {
            if(a[j]>=c)
            {
                printf("\n %d ceiling in array is %d",i,a[j]);
                break;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        c=i;
        for(j=0;j<n;j++)
        {
            if(a[j]<=c)
            {
                temp=a[j];
            }
        }
        printf("\n %d flooring in array is %d",c,temp);
    }
    return 0;
}
