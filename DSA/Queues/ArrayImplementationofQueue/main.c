#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int rear = -1;
int front = -1;
int Q[SIZE];

void enqueue(int data)
{
    if(rear == SIZE - 1)
    {
        printf("Overflow");
        exit(1);
    }
    else
    {
        if(rear == -1 && front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
    }
    Q[rear] = data;
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Underflow");
        exit(1);
    }
    else
    {
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
    }
}

void print()
{
    printf("\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d  ",Q[i]);
    }
}

int main()
{
    printf("Hello world!\n");
    int n,i,x;
    printf("enter size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        enqueue(x);
    }
    print();
    dequeue();
    print();
    dequeue();
    print();
    return 0;
}
