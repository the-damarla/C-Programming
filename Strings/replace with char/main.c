#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("enter a string : ");gets(v);
    int i=0;
    while(v[i]!='\0')
    {
        if(v[i]==' ')
        {
            printf("*");
        }
        else
            printf("%c",v[i]);
        i++;
    }
    return 0;
}
