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

void reverse()
{
    struct node *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

int main()
{
    printf("Hello world!\n");
    int n,i,x;
    printf("Enter the length : ");scanf("%d",&n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("Before Reversing :");display();
    printf("\n After reversing the list :\t");reverse();display();
    return 0;
}
