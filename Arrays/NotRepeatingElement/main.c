#include <stdio.h>
#include <stdlib.h>

void print(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void notrepeating(int a[], int n, int b[], int k)
{
    for(int i=0;i<k;i++)
    {
        int c = 0;
        for(int j=0;j<n;j++)
        {
            if(b[i] == a[j])
            {
                c++;
            }
        }
        if(c < 2)
        {
            printf("the not repeating element is : %d\n",b[i]);
        }
    }
}

void unique(int a[], int n)
{
    int k=0;
    int b[100] = {0};
    for(int i=0;i<n;i++)
    {
        int c = 0;
        for(int j=i;j<n;j++)
        {
            if(a[i] == a[j])
            {
                c++;
            }
        }
        if(c == 1)
        {
            b[k] = a[i];
            k++;
        }
    }
    //print(b,k);
    notrepeating(a,n,b,k);
}

int main()
{
    printf("This is a naive solution for \"Every element in the array is repeated twice except one element,find that element !\"\n");
    /*Test cases : array size = 5-> 1,2,3,1,2---> not repeating twice is 3
                   array size = 7->4,5,6,7,4,5,6---->not repeating twice is 7*/
    int n;
    printf("ENTER THE SIZE OF AN ARRAY : ");scanf("%d",&n);
    int a[n];
    printf("enter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a,n);
    return 0;
}
