#include <stdio.h>
#include <stdlib.h>

void extract(char y[100],int n)
{
    int st,en,i;
    printf("Enter from where to extract : ");scanf("%d",&st);
    printf("Enter up to where to extract : ");scanf("%d",&en);
    for(i=st;i<=st+en;i++)
    {
        printf("%c\t",y[i]);
    }
}

void len(char x[100])
{
    int i=0;
    while(x[i]!=0)
    {
        i++;
    }
    extract(x,i);
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("Enter a string : ");gets(v);
    len(v);
    return 0;
}
