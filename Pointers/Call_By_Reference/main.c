#include <stdio.h>
#include <stdlib.h>

int Add(int *x,int *y)
{
    return *x+*y;

}

int main()
{
    printf("Hello world!\n");
    int a,b;
    printf("enter a : ");scanf("%d",&a);
    printf("enter b : ");scanf("%d",&b);
    int c;
    c=Add(&a,&b);
    printf("\nAddition is %d",c);
    return 0;
}
