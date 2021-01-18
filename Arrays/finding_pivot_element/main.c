#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,mid,start,end;
    int a[100]={0};
    printf("enter size of array :");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("*****CHECKING FOR PIVOT ELEMENT****");
    start=0;
    end=(n-1);
    for(i=0;i<n;i++)
    {
        mid=(start+end)/2;
        if(a[mid-1]>a[mid])
        {
            printf("The pivot element is : %d",a[mid]);
            break;
        }
        if(a[mid]>a[mid+1])
        {
            printf("Pivot is %d",a[mid+1]);
            break;
        }
        if(a[start]<=a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return 0;
}
