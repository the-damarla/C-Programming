#include <stdio.h>
#include <stdlib.h>

int Largest(int *x,int n)
{
    int i,l=*x;
    for(i=1;i<n;i++)
    {
        if(*(x+i)>l)
        {
            l=*(x+i);
        }
    }
    return l;
}

int main()
{
    printf("Hello world!\n");
    int n,i;
    printf("enter size of the Array : ");scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    printf("Largest is : ");
    int large;
    large=Largest(p,n);
    printf("%d",large);
    return 0;
}
