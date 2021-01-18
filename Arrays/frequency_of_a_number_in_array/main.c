#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,i,j,c=0,k=0,f=0;
    printf("Enter size: ");scanf("%d",&n);
    int a[100]={0};
    int b[100]={0};
    printf("enter array array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(a[j]==a[i])
            {
               c++;
            }
        }
        if(c==1)
        {
            b[k]=a[i];
            k++;
        }
    }

    for(i=0;i<k;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                f++;
            }
        }
        printf("the frequency of %d in array is %d\n",b[i],f);
    }

    return 0;
}
