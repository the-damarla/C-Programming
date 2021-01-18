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

void maxfreq(char x[100],char y[100],int z)
{
    int i,j;
    int n=len(x);
    int s=len(y);
    int c=0;
    for(i=0;i<s;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(y[i]==x[j])
            {
                c++;
            }
        }
        if(c==z)
        {
            printf("\nMax occurred character is %c",y[i]);
        }
    }
}

void frequency(char x[100],char y[100])
{
    int i,j;
    int n=len(x);
    int s=len(y);
    int c=0,max=0;
    for(i=0;i<s;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(y[i]==x[j])
            {
                c++;
            }
        }
        if(max<c)
        {
            max=c;
        }
        printf("\nFrequency of %c is %d",y[i],c);
    }
    maxfreq(x,y,max);
}


int uniq(char x[100])
{
    char s[100];
    int n=len(x);
    int i,j,count,k=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            if(x[i]==x[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            s[k]=x[i];
            k++;
        }

    }
    s[k]='\0';
    frequency(x,s);
    return 0;
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("Enter the string : ");gets(v);
    uniq(v);

    return 0;
}
