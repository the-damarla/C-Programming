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

void sort(char y[100])
{
    int c=len(y);
    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=i;j<c;j++)
        {
            if(y[i]>y[j])
            {
                char temp;
                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        printf("\t%c",y[i]);
    }
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("enter a string : ");gets(v);
    sort(v);
    return 0;
}
