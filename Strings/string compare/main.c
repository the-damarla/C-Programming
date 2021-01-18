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
    printf("Enter 1st String : ");gets(v);
    printf("enter second string : ");gets(s);
    int v1=len(v);
    int s1=len(s);
    int i,flag=0;
    for(i=0;i<v1;i++)
    {
        if(v[i]==s[i])
        {
            flag++;
        }
        else
            break;
    }
    if(flag==v1)
    {
        printf("Strings are same !!");
    }
    else
    {
        printf("Strings are not same.");
    }
    if(v1==s1)
    {
        printf("\nStrings are of same length.");
    }
    else
    {
        printf("\nStrings are of different lengths.");
    }
    return 0;
}
