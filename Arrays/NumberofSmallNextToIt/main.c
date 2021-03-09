#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[100];
    int n;
    printf("enter No. of elements in array : ");scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c = 0;
        for(int j=i;j<n;j++)
        {
            if(a[i] > a[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
    return 0;
}
