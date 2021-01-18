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
    char v[100];
    printf("enter the String : ");gets(v);
    int c=len(v);
    int vow=0,sp=0,alp=0;
    for(int i=0;i<c;i++)
    {
        if(v[i]=='a'|| v[i]=='e'|| v[i]=='i'|| v[i]=='o'|| v[i]=='u'|| v[i]=='A'|| v[i]=='E'|| v[i]=='I'|| v[i]=='O'|| v[i]=='U')
        {
            vow++;
        }
        else if(v[i]=='.'|| v[i]==' '|| v[i]=='9'|| v[i]=='8'|| v[i]=='7'|| v[i]=='6'|| v[i]=='5'|| v[i]=='4'|| v[i]=='3'|| v[i]=='2'|| v[i]=='1'|| v[i]=='0'|| v[i]==',')
        {
            sp++;
        }
        else
            alp++;
    }
    printf("\n the given string length is : %d",c);
    printf("\n No of alphabets : %d",alp);
    printf("\n No of vowels :%d",vow);
    printf("\n No of special chars are : %d",sp);
    return 0;
}
