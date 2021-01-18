#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,temp,rem,rev=0;
    printf("enter a number :");scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("Palindrome");
    }
    else
        printf("Not a palindrome");
    return 0;
}
