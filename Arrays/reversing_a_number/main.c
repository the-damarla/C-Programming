#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,rem;
    printf("enter number :");scanf("%d",&n);
    printf("reverse of the number :\t");
    while(n>0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
    return 0;
}
