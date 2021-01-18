#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("enter the string : ");gets(v);
    int c=0;
    while(v[c]!='\0')
    {
        c++;
    }
    printf("Length of the given string : %d\n",c);
    for(int i=c;i>=0;i--)
    {
        printf("%c\t",v[i]);
    }
    return 0;
}
