#include <stdio.h>
#include <stdlib.h>

void print(int *p,int n)
{
    printf("\nArray After sorting :\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}

int insertionsort(int *p,int n)
{
    int hole,value;
    for(int i=1;i<n;i++)
    {
        value=*(p+i);
        hole=i;
        while(hole>0 && *(p+(hole-1))>value)
        {
            *(p+hole)=*(p+(hole-1));
            hole=hole-1;
        }
        *(p+hole)=value;
    }
    print(p,n);
    return 0;
}

int main()
{
    printf("Hello world!\n");
    int n;
    printf("Enter the size of array : ");scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    printf("Enter the array elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    insertionsort(p,n);
    free(p);
    return 0;
}
