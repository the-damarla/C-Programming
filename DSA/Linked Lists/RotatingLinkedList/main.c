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
        printf("%d  ",temp->data);
        temp = temp->next;
    }
}

void rotate()
{
    struct node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    struct node* temp1 = head;
    head = head->next;
    temp1->next = NULL;
    temp->next = temp1;
}

int main()
{
    printf("Hello world!\n");
    int x;
    while(1)
    {
        printf("enter a number :");
        scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            insert(x);
        }
    }
    //print();
    int r;
    printf("enter number of rotations : ");scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        rotate();
    }
    print();
    return 0;
}
