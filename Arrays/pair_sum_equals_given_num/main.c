#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,comp;
    int a[100]={0};
    printf("enter array size : ");scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter comparator : ");scanf("%d",&comp);
    printf("given Array is :\n\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==comp)
            {
                printf("\n the pair than can do %d as the sum is found at %d and %d as %d and %d\n",comp,i,j,a[i],a[j]);
                exit(0);
            }
        }
    }
    printf("\n NOT FOUND ");
    return 0;
}
