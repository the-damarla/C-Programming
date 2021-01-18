#include <stdio.h>
#include <stdlib.h>

int len(char x[100])
{
    int i=0;
    while(x[i]!=0)
        i++;
    return i;
}

void convert(char x[100])
{
    int c=len(x);
    for(int i=0;i<c;i++)
    {
        if(x[i]==' '||x[i]=='.'||x[i]==','||x[i]==';')
        {
            printf("%c",x[i]);
        }
        else if(x[i]>='A' && x[i]<='Z')
            printf("%C",x[i]+32);
        else
            printf("%c",x[i]-32);
    }
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("Enter a string : ");gets(v);
    convert(v);
    return 0;
}
