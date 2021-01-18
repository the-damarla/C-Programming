#include <stdio.h>
#include <stdlib.h>

void Print(int n, int *y)
{
    int i;
    printf("Array elements are :\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(y+i));
    }
}

void Sum(int n,int *x)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=*(x+i);
    }
    printf("\nSum of elements in the Array is %d",sum);
}

int main()
{
    printf("Hello world!\n");
    int n,i;
    printf("enter the size of array : ");scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    printf("Enter Array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    Print(n,p);
    Sum(n,p);
    free(p);
    return 0;
}
