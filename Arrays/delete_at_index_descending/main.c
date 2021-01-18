#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,ind;
    int a[100]={0};
    printf("Enter array size :");scanf("%d",&n);
    printf("\n enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter index to delete :");
    scanf("%d",&ind);
    for(i=ind-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
