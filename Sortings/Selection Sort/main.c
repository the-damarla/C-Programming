#include <stdio.h>
#include <stdlib.h>

void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void print(int *p,int n)
{
    printf("\n Sorted Array is : \t");
    for(int i=0;i<n;i++)
        printf("%d\t",*(p+i));
}

int selectionsort(int *p,int n)
{
    int j,min_ind;
    for(int i=0;i<n;i++)
    {
        min_ind=i;
        for( j=i+1;j<n;j++)
        {
            if(*(p+j) < *(p+min_ind))
            {
                min_ind=j;
            }
        }
        swap((p+i),(p+min_ind));
    }
    print(p,n);
    return 0;
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("Enter the size of an array : ");scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    selectionsort(p,n);
    free(p);2
    return 0;
}
