#include <stdio.h>
#include <stdlib.h>
int print(int *x,int n)
{
    int i,c;
    printf("\nsize of x: %d",sizeof(x));
    printf("\nsize of x: %d",sizeof(*x));
    printf("\nsize of x: %d",sizeof(int));

    c=sizeof(*x)/sizeof(int);
    printf("\n%d\n\n",c);
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(x+i));
    }
    return 0;
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("enter size of array : ");scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter Array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    printf("\n Array Elements \t");
    print(p,n);
    return 0;
}
