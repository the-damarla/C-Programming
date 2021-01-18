#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Hello world!\n");

    int a,b;
    int *p1,*p2;
    printf("Enter a : ");scanf("%d",&a);
    printf("Enter b : ");scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("**********ANSWER**********\n");
    printf("\nValue of a : %d",a);
    printf("\nValue of a : %d",*p1);

    printf("\nValue of a : %d",b);
    printf("\nValue of a : %d",*p2);

    printf("\nAddress of a : %d",p1);
    printf("\n Address of b : %d",p2);

    printf("\nAddress of a : %d",&a);
    printf("\n Address of b : %d",&b);



}
