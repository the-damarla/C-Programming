#include <stdio.h>
#include <stdlib.h>

void print(int *p,int n)
{
    printf("\n Array after sorted : \t");
    for(int i=0;i<n;i++)
        printf("%d\t",*(p+i));
}

void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void bubblesort(int *p,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                swap((p+j),(p+j+1));
            }
        }
    }
    print(p,n);
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("Enter the size of the array : ");scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    bubblesort(p,n);
    free(p);
    return 0;
}
