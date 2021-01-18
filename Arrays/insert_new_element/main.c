#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,ind,el,j,temp;
    int a[100]={0};
    printf("Enter array size : ");scanf("%d",&n);
    printf("\n enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter index to insert :");scanf("%d",&ind);
    printf("enter element to be inserted :");scanf("%d",&el);
    for(i=n;i>ind-1;i--)
    {
        a[i]=a[i-1];
    }
        a[ind-1]=el;

    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n After sorted :");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
