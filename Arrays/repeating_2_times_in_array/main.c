#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n;
    int a[100]={0};
    printf("enter Array size :");scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("repeated elements are :\t");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\t",a[i]);
            }
        }

    }
    return 0;
}
