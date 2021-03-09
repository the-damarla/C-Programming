#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* rear = NULL;
struct node* front = NULL;

struct node* getnode(int x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
};

void enqueue(int x)
{
    struct node* newnode = getnode(x);
    if(rear == NULL && front == NULL)
    {
        rear = front = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    struct node* temp = front;
    if(front == NULL)
    {
        printf("UnderFlow");
        exit(1);
    }
    else if(front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = temp->next;
    }
    free(temp);
}

void print()
{
    struct node* temp = front;
    while(temp != NULL)
    {
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    printf("Hello world!\n");
    int x;
    printf("Takes Input till 0 is given\n");
    while(1)
    {
        printf("enter element to Enqueue : ");scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
            enqueue(x);
    }
    print();
    dequeue();
    print();
    dequeue();
    print();
    return 0;
}
