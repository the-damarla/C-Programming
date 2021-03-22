#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("enter C for coffee -  the enter \n1. Espresso\n2. Cappucino\n3. Latte Coofee\n TEA - t\n 1. Plain Tea\n 2. Assam Tea\nGinger Tea\n");
    char v;
    int n;
    scanf("%c",&v);
    scanf("%d",&n);
    if(v == 'c' || v == 'C' || v == 't' ||v == 'T')
    {
        printf("Welcome to CCD!");
        if((v == 'c' || v == 'C')&& n== 1)
        {
            printf("Enjoy ur Espresso");
        }
        if((v == 'c' || v == 'C')&& n== 2)
        {
            printf("Enjoy ur Cappucino");
        }
        if((v == 't' || v == 'T')&& n== 1)
        {
            printf("Enjoy ur Ginger Tea");
        }
        if((v == 't' || v == 'T')&& n== 2)
        {
            printf("Enjoy ur Assam Tea");
        }
    }
    return 0;
}
