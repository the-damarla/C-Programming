#include <stdio.h>
#include <stdlib.h>

int loop()
{

    int i,j,n,k=0,c,count=0,flag=0,temp;
    int a[100]={0};
    int b[100]={0};
    printf("enter array size :"); scanf("%d",&n);
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
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
        count=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
                flag=1;
                temp=b[i];
                break;
        }

    }
    if(flag==1)
    {
        printf("\nMajority of the element is %d ",temp);
    }
    else
        printf("\n -1");

    return 0;
}

int main()
{
    int i,n;
    printf("LOOPING :");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        loop();
    }
}
