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
    printf("enter the string :");gets(v);
    int c=len(v);
    int num=0,sp=0,alp=0;
    for(int i=0;i<c;i++)
    {
        if(v[i]=='1' || v[i]=='2' || v[i]=='3' || v[i]=='4' || v[i]=='5' || v[i]=='6' || v[i]=='7' || v[i]=='8' || v[i]=='9' || v[i]=='0')
        {
            num++;
        }
        else if(v[i]==' ' || v[i]=='.'|| v[i]==','||v[i]==':')
        {
            sp++;
        }
        else
            alp++;
    }
    printf("\nNo. of alphabet : %d",alp);
    printf("\nNo. of numbers are : %d",num);
    printf("\nNo. of special characters are : %d",sp);
    return 0;
}
