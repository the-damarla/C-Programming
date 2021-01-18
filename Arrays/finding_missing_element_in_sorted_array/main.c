#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,count=0;
    int a[100]={0};
    printf("enter size of the array : ");scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Missing element is : ");
    for(i=a[0];i<(a[0]+n);i++)
    {
        if(a[count]!=i)
        {
            printf("%d",i);
            break;
        }
        count++;
    }
    return 0;
}
