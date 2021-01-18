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

void conver(char x[100])
{
    int l=len(x);
    for(int i=0;i<l;i++)
    {
        if(x[i]>='A' && x[i]<='Z')
        {
            printf("%c",x[i]+32);
        }
        else
            printf("%c",x[i]);
    }
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("Enter the string : ");gets(v);
    conver(v);
    return 0;
}
