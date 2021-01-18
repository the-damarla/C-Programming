#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,c=0,k=0;
    int a[100]={0};
    int b[100]={0};
    printf("enter size of the array :");scanf("%d",&n);
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                    if(c==0)
                    {
                        printf("\n%d is the next bid of %d",a[i],a[j]);
                        b[k]=a[j];
                        k++;
                    }
                c++;
            }
        }
        if(c==0)
        {
            printf("\n%d next big is -1",a[i]);
            b[k]=-1;
            k++;
        }
    }
    printf("Given Array is :\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nNext big elements array is :\t");
    for(i=0;i<k;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
