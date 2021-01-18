#include <stdio.h>
#include <stdlib.h>

int Max(int *x,int *y)
{
    if(*x>*y)
        return x;
    else
        return y;
}

int main()
{
    printf("Hello world!\n");
    int a,b;
    printf("enter a value : ");scanf("%d",&a);
    printf("enter b value : ");scanf("%d",&b);
    int *c;
    c=Max(&a,&b);
    printf("the Max number is : %d",*c);
    return 0;
}
