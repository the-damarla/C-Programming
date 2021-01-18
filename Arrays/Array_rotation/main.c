#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,n,r,temp,ch;
    int a[100]={0};
    printf("enter array size : ");scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no. of rotations : ");scanf("%d",&r);
    printf(" Array before Rotation :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter 1 for left Rotation or 2 for right rotation :");scanf("%d",&ch);
    printf("\nArray after rotation :");
    if(ch==1)
    {
        for(i=0;i<r;i++)
    {
        temp=a[0];
        for(j=0;j<n;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    else if(ch==2)
    {
        for(i=0;i<r;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    else
        printf("WRONG CHOICE");
    return 0;
}
