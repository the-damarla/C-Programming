#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter a value : ");scanf("%d",&*p1);
    printf("enter b value : ");scanf("%d",&*p2);
    printf("Addition : %d",*p1+*p2);
    return 0;
}
