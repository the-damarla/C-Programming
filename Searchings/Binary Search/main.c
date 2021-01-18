#include <stdio.h>
#include <stdlib.h>

void BinarySearch(int *p,int n)
{
    int x;printf("\nEnter an element to search : ");scanf("%d",&x);
    int mid=n/2;
    if(*(p+mid)==x)
    {
        printf("Found at %d",mid);
    }
    if(x<*(p+mid))
    {
        for(int i=0;i<=mid;i++)
        {
            if(*(p+i)==x)
            {
                printf("Found at %d",i);
                exit(0);
            }
        }
    }
    else if(x>*(p+mid))
    {
        for(int i=mid;i<n;i++)
        {
            if(*(p+i)==x)
            {
                printf("Found at %d",i);
                exit(0);
            }
        }
    }
    printf("Not found");
}

void print(int *p,int n)
{
    for(int i=0;i<n;i++)
        printf("%d\t",*(p+i));
}

void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void sort(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                swap((p+i),(p+j));
            }
        }
    }
    printf("Array after sorted :\t");
    print(p,n);
    BinarySearch(p,n);
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("enter size of the array :");scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    printf("Enter elements : \n");
    for(int i=0;i<n;i++)
        scanf("%d",&*(p+i));
    sort(p,n);
    return 0;
}
