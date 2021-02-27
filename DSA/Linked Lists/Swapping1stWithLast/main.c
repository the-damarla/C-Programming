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

void swap()
{
    struct node* temp = head;
    int x,y;
    x = temp->data;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    y = temp->data;
    temp->data = x;
    head->data = y;
}

int main()
{
    printf("Hello world!\n");
    int n,x,i;
    printf("enter size of the linked list : ");scanf("%d",&n);
    printf("\n enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    print();
    printf("\nAfter SWAP :");
    swap();
    print();
    return 0;
}
