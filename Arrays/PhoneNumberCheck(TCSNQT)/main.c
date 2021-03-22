#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char *v)
{
    int x = strlen(v);
    int k = 0;
    if(x == 10)
    {
        for(int i=0;i<x;i++)
        {
            if(v[i] >= 'a' || v[i] <= 'z' || v[i] >= 'A' || v[i] <= 'Z')
            {
                k = 1;
            }
        }
    }
    if(k == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("Hello world!\n");
    int n,sum = 0;
    char v[100];
    while(1)
    {
        printf("enter phn Number : ");scanf("%s",v);
        if(v[0] == 'q' || v[0] == 'Q'){
            break;
        }
        else{
            n = check(v);
            sum = sum + n;
        }
    }
    printf("no. of valid numbers are : %d",sum);
    return 0;
}
