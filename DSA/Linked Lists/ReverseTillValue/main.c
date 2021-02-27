#include <stdio.h>
#include <stdlib.h>

struct node* head;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* getnode(int x)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
};


void insert(int x)
{
    struct node* newnode=getnode(x);
    struct node* temp=head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
}

void reverse(int x)
{
    struct node* temp=head;
    for(int i=1;i<x;i++)
    {
        temp = temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->prev;
    }
    temp = head;
    for(int i=0;i<x;i++)
    {
        temp = temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}


int main()
{
    printf("Hello world!\n");
    int n;
    while(1)
    {
        printf(" Enter Number : ");scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            insert(n);
        }
    }
    printf("\nenter to reverse ");int x;scanf("%d",&x);
    reverse(x);
    return 0;
}
