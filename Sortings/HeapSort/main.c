#include <stdio.h>
#include <stdlib.h>

void heapify(int a[],int n, int i)
{
    int largest = i;
    int left = i * 2 + 1;
    int right = i *2 + 2;
    if(left < n && a[left] > a[largest])
    {
        largest = left;
    }
    if(right < n && a[right] > a[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        int x = a[i];
        a[i] = a[largest];
        a[largest] = x;

        heapify(a,n,largest);
    }
}

void heapsort(int a[], int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--)
    {
        int x = a[0];
        a[0] = a[i];
        a[i] = x;

        heapify(a,i,0);
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("enter size of the array : ");scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    print(a,n);
    return 0;
}
