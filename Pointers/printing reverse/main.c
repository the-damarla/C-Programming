#include <stdio.h>
#include <stdlib.h>

void Print(int n,int *x)
{
    int i;
    printf("\nGiven Array is :\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(x+i));
    }
}

void Reverse(int n,int *y)
{
    int i;
    printf("\nPrinting Array in reverse Order :\t");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(y+i));
    }
}

int main()
{
    printf("Hello world!\n");
    int n,i;
    printf("enter size of the array : ");scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    printf("Enter Array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    Print(n,p);
    Reverse(n,p);
    free(p);
    return 0;
}
