#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* getnode(int x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
};

void insert(int x)
{
    struct node* newnode = getnode(x);
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void print()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void swap(int x, int y)
{
    int u,v;
    struct node* temp = head;
    for(int i=1;i<x;i++)
    {
        temp = temp->next;
    }
    u = temp->data;
    temp = head;
    for(int i=1;i<y;i++)
    {
        temp = temp->next;
    }
    v = temp->data;
    temp = head;
    for(int i=1;i<x;i++)
    {
        temp = temp->next;
    }
    temp->data = v;
    temp = head;
    for(int i=1;i<y;i++)
    {
        temp = temp->next;
    }
    temp->data = u;
    printf("\n");
}

int main()
{
    printf("Hello world!\n");
    int n,x;
    int r,s;
    printf("enter size of the list : ");scanf("%d",&n);
    printf("\n enter elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("enter 1st position to swap : ");scanf("%d",&r);
    printf("\n enter position to swap with : ");scanf("%d",&s);
    print();
    swap(r,s);
    print();
    return 0;
}
