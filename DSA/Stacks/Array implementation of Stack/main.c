#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 101

int A[MAXSIZE];
int top=-1;

void push(int x)
{
    if(top==MAXSIZE-1)
        printf("OVERFLOW\n");
    else
    {
        top=top+1;
        A[top]=x;
    }
}

void pop()
{
    if(top==-1)
        printf("UNDERFLOW\n");
    else
        top=top-1;
}

void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int Top()
{
    printf("%d\n",A[top]);
    return 0;
}

int main()
{
    printf("Hello world!\n");
    int x;
    while(x!=4)
    {
        printf("\n1 for push\n2 for pop\n3 for print\n4 for exit \n5 for top element \nEnter your choice : ");scanf("%d",&x);
        if(x==1)
        {
            int y;
            printf("\n Enter element to push :");scanf("%d",&y);
            push(y);
        }
        else if(x==2)
            pop();
        else if(x==3)
            print();
        else if(x==5)
            Top();

    }
    return 0;
}
