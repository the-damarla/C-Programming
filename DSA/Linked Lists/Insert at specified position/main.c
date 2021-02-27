#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;

void insertat(int pos,int dat)
{
    int i=0;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=dat;
    struct node* temp=head;
    if(pos==1)
    {
        ptr->next=temp;
        head=ptr;
        return;
    }
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;

}

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

int main()
{
    printf("Hello world!\n");
    int n,x,i;
    printf("Enter length of the linked list : ");scanf("%d",&n);
    printf("Enter the data : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\n The list : \t");print();printf("\n");
    int pos,dat;
    printf("Enter the position you want to insert : ");scanf("%d",&pos);
    printf("enter the data you want to insert :" );scanf("%d",&dat);
    if(pos<1 || pos>n)
        printf("Not Possible ");
    else
        insertat(pos,dat);
    printf("\n After insertion : \t");
    print();
    return 0;
}
