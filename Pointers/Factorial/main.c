#include <stdio.h>
#include <stdlib.h>

void Fact(int n,int *f)
{
    int i;
    *f=1;
    for(i=1;i<=n;i++)
    {
        *f=*f*i;
    }
    printf("Factorial of %d is %d",n,*f);
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("Factorial for number : ");scanf("%d",&n);
    Fact(n,&n);
    return 0;
}
