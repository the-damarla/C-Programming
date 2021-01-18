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

void comapre(char x[100],char y[100])
{
    int n1,n2,c,k=0;
    n1=len(x);
    n2=len(y);
    for(int i=0;i<n1;i++)
    {
        c=0;
        for(int j=0;j<n2;j++)
        {
            if(y[j]==x[i+j])
            {
                c++;
            }
        }
        if(c==n2)
        {
            k++;
        }
    }
    if(k>0)
    {
        printf("%s is found %d times ",y,k);
    }
    else
    {
        printf("NOT FOUND");

    }
}

int main()
{
    printf("Hello world!\n");
    char v[100],s[100];
    printf("Enter the string : ");gets(v);
    printf("\nenter the string to search : ");gets(s);
    comapre(v,s);
    return 0;
}
