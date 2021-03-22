#include <stdio.h>
#include <stdlib.h>

int min(int a[], int k)
{
    int min = a[0];
    for(int i=1;i<k;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int max(int a[], int k)
{
    int max = a[0];
    for(int i=1;i<k;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int findmin(int a,int b)
{
    return (a<b)?a:b;
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("enter a number : ");scanf("%d",&n);
    int a[100] = {0},b[100]={0},temp,k=0;
    while(n>0)
    {
        temp = n % 10;
        a[k] = temp;
        n = n / 10;
        k++;
    }
    int mini = min(a,k);
    int l = 0;
    if(a[k-1] == mini)
    {
        for(int i=0;i<k-1;i++)
        {
            int minel = findmin(a[i],a[i+1]);
            b[l] = minel;
            l++;
        }
    }
    else
    {
        printf("-1");
    }
    int maxel = max(a,k);
    for(int i=0;i<l;i++)
    {
        printf("%d",b[i]);
    }
    printf("%d",maxel);
    return 0;
}
