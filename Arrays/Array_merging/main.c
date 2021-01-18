#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,m,j,temp=0;
    int a[100]={0};
    int b[100]={0};
    printf("enter array size : ");scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter 2nd array size :");scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("1st array is  :  ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n the 2nd array is  :  ");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
    for(i=0;i<m;i++)
    {
        a[n]=b[i];
        n++;
    }
    printf("\n Merged array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nSorted Array is :");
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
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
