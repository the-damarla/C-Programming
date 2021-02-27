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

void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void deletion(int n)
{
    struct node* temp=head;

    for(int i=1;i<n-1;i++)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
    printf("Hello world!\n");
    int n,i,x;
    printf("Enter the size of the linked list : ");scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\n The entered list is :\t");print();
    printf("\n After the deletion at end :\t");deletion(n);print();
    return 0;
}
