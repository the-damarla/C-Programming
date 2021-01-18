#include <stdio.h>
#include <stdlib.h>

void LinearSearch(int *p,int n)
{
    printf("Enter an element to search : ");int x;scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(*(p+i)==x)
        {
            printf("Found at index %d\n\n",i);
            exit(0);
        }
    }
    printf("Not found\n\n");
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("Enter the size of an array : ");scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
        scanf("%d",&*(p+i));
    LinearSearch(p,n);
    return 0;
}
