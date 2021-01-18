#include <stdio.h>
#include <stdlib.h>

int len(char x[100])
{
    int i=0;
    while(x[i]!=0)
    {
        i++;
    }
    return i;
}

int main()
{
    printf("Hello world!\n");
    char v[100],s[100];
    printf("enter the string :");gets(v);
    int c=len(v);
    for(int i=0;i<c;i++)
    {
        s[i]=v[i];
    }
    s[c]='\0';
    printf("the string entered : %s",v);
    printf("\nthe copied string : %s",s);
    printf("\nNo. of characters copied : %d",c);
    return 0;
}
