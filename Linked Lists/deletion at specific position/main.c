#include <stdio.h>
#include <stdlib.h>

struct node* head=NULL;

struct node
{
    int data;
    struct node* next;
};

void insert(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void Deleteat(int x)
{
    struct node* temp=head;
    if(x==1)
    {
        head=temp->next;
        free(temp);
        return;
    }
    for(int i=1;i<x-1;i++)
    {
        temp=temp->next;
    }
    struct node* temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}

int main()
{
    printf("Hello world!\n");
    int n,i,x,pos;
    printf("enter length of the list : ");scanf("%d",&n);
    printf("enter the elements of the list :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\n Now the list is \t");display();
    printf("Enter the position to delete the node :");scanf("%d",&pos);
    Deleteat(pos);
    printf("\n After the deletion of the node :\t");display();
    return 0;
}
