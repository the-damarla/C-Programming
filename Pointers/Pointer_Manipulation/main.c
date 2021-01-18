#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int m;
    int *p;
    printf("Enter a value for m : ");scanf("%d",&m);
    p=&m;
    printf("\nAddress of m : %d",p);
    printf("\nNow Manipulation \nEnter a value for m : ");scanf("%d",&*p);
    printf("\n m: %d",m);
    printf("\nAddress of m : %d",p);
    *p=10;
    printf("\nNow the value of m will be : %d",*(&m));
    printf("\nAddress of m will be : %d",p);
    return 0;
}
