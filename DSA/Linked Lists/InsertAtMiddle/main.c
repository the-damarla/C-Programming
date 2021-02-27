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

void insertatmiddle(int x)
{
    struct node* newnode = getnode(x);
    struct node* temp = head;
    for(int i=0;i<1;i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    printf("Hello world!\n");
    int x;
    scanf("%d",&x);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    print();
    printf("\n after middle : ");
    insertatmiddle(x);
    print();
    return 0;
}
