#include <stdio.h>
#include <stdlib.h>

void Sort(int n,int *x)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(*(x+i)>*(x+j))
            {
                temp=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=temp;
            }
        }
    }
    printf("Sorted Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(x+i));
    }
}

int main()
{
    printf("Hello world!\n");
    int n,i;
    printf("enter size of Array : ");scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    Sort(n,p);
    free(p);
    return 0;
}
