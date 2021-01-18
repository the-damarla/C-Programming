#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Hello world!\n");
    char v[20];
    printf("enter a string : ");gets(v);
    printf("Given string is : %s",v);
    int c;
    c=strlen(v);
    printf("\n");
    for(int i=0;i<c;i++)
    {
        printf("%c\t",v[i]);
    }
    return 0;
}
