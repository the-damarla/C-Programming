#include <stdio.h>
#include <stdlib.h>

int partition(int a[],int start, int end)
{
    int pivot = a[end];
    int pind = start;
    for(int i=start;i<end;i++)
    {
        if(a[i] <= pivot)
        {
            int x = a[i];
            a[i] = a[pind];
            a[pind] = x;
            pind = pind + 1;
        }
    }
    int x = a[pind];
    a[pind] = a[end];
    a[end] = x;
    printf("pivot for this pass is : %d \n",pivot);
    return pind;
}

void quicksort(int a[],int start, int end)
{
    if(start < end)
    {
        int pind = partition(a,start,end);
        quicksort(a,start,pind - 1);
        quicksort(a,pind+1,end);
    }
}

int main()
{
    printf("Hello world!\n");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
