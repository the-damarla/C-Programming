#include <stdio.h>
#include <stdlib.h>

void Swap(int *x1,int *x2,int *x3)
{
    int temp;
    temp=*x1;
    *x1=*x2;
    *x2=*x3;
    *x3=temp;
    printf("Swapped Values are : %d  %d  %d",*x1,*x2,*x3);
}

int main()
{
    printf("Hello world!\n");
    int a,b,c;
    printf("Enter value of a: ");scanf("%d",&a);
    printf("Enter value of b: ");scanf("%d",&b);
    printf("Enter value of c: ");scanf("%d",&c);

    Swap(&a,&b,&c);
    return 0;
}
