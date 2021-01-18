#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("enter the string : ");gets(v);
    int i=0,c=0;
    while(1)
    {
        if(v[i]=='\0')
            break;
        else
        {
            c++;
        }
        i++;
    }
    printf("length of the string is : %d",c);
    return 0;
}
