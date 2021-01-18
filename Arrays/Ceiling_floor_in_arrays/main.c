#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,temp,c;
    int a[100]={0};
    printf("enter size of array :");scanf("%d",&n);
    printf("Enter Array elements :\n");
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
    printf("enter an element to find ceiling : ");scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]>=c)
        {
            printf("%d ceiling in given array is %d",c,a[i]);
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=c)
        {
            temp=a[i];
        }
    }
    printf("\n%d flooring in given array is %d",c,temp);
    return 0;
}
