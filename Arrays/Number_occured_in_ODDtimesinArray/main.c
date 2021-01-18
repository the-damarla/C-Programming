#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,count=0,k=0,counter=0;
    int a[100]={0};
    int b[100]={0};
    printf("enter Array size :");scanf("%d",&n);
    printf("enter Array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        counter=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
               {
                   counter++;
               }
        }
        if(counter%2!=0)
        {
            printf("%d occur %d times\n",b[i],counter);
        }
    }
    return 0;
}
