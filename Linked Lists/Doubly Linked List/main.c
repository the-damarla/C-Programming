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
    if(head == NULL)
        head=newnode;
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
}

void insertattail(int x)
{
    struct node* newnode=getnode(x);
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
}

void print()
{
    struct node* temp=head;
    printf("Front order : \t");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void printrev()
{
    struct node* temp=head;
    printf("\nReverse Order :\t");
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->prev;
    }
}

int main()
{
    printf("Hello world!\n");
    int x,i,n;
    printf("enter the size of the list : ");scanf("%d",&n);
    printf("Enter the list data :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    print();
    printrev();
    printf("\nEnter size of extension : ");scanf("%d",&n);
    printf("\n Enter the extension elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertattail(x);
    }
    print();
    printrev();
    return 0;
}
