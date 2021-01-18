#include <stdio.h>
#include <stdlib.h>

int len(char x[100])
{
    int i=0;
    while(x[i]!='\0')
    {
        i++;
    }
    return i;
}

void concate(char x[100],char y[100])
{
    int l1=len(x);
    int l2=len(y);
    char z[100];
    int j=0,i;
    for(i=0;i<l1;i++)
    {
        z[i]=x[i];
    }
    z[l1]=' ';
    for(int i=l1+1;i<=(l1+l2);i++)
    {
        z[i]=y[j];
        j++;
    }
    z[(l1+l2)+1]='\0';
    printf("\n %s",z);

}

int main()
{
    printf("Hello world!\n");
    char v[100],s[100];
    printf("Enter a string : ");gets(v);
    printf("Enter a second string : ");gets(s);
    concate(v,s);
    return 0;
}
