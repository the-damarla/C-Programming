#include <stdio.h>
#include <stdlib.h>

int stringlen(char v[100])
{
    int c=0;
    while(v[c] != '\0')
    {
        c++;
    }
    return c;
}

void palindromecheck(char v[100])
{
    int c = stringlen(v);
    int count=0;
    for(int i=0;i<c;i++)
    {
        if(v[i] == v[c-i-1])
        {
            count++;
        }
    }
    if(count == c)
    {
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    printf("Enter the string : ");gets(v);
    palindromecheck(v);
    return 0;
}
