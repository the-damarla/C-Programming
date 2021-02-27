#include <stdio.h>
#include <stdlib.h>

struct node* head=NULL;

struct node
{
    int data;
    struct node* next;
};

struct node* getnode(int x)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
};

void push(int x)
{
    struct node* newnode=getnode(x);
    newnode->next=head;
    head=newnode;
}

void pop()
{
    struct node* temp=head;
    head=temp->next;
    free(temp);
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

void Top()
{
    struct node* temp=head;
    printf("\n TOP id :%d\n",temp->data);
}

int main()
{
    printf("Hello world!\n");
    int x;
    while(x!=5)
    {
        printf("\n 1 FOR PUSH \n 2 FOR POP \n 3 FOR PRINT \n 4 FOR TOP\n5 FOR EXIT ENTER YOUR CHOICE : ");scanf("%d",&x);
        if(x==1)
        {
            printf("\n Enter the umber You want push : ");int y;scanf("%d",&y);
            push(y);
        }
        else if(x==2)
        {
            pop();
        }
        else if(x==3)
        {
            print();
        }
        else if(x==4)
        {
            Top();
        }
    }
    return 0;
}
