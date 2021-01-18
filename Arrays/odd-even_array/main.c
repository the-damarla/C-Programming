#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,e=0,o=0;
    int a[100]={0};
    int even[100]={0};
    int odd[100]={0};
    printf("enter array size :");scanf("%d",&n);
    printf("\n enter elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
    printf("\n even elements are : ");
    for(i=0;i<e;i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\n odd elements are : ");
    for(i=0;i<o;i++)
    {
        printf("%d\t",odd[i]);
    }

    return 0;
}
