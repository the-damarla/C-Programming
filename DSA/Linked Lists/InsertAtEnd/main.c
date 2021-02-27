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
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void insert(int x)
{
    struct node* newnode = getnode(x);
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insertatend(int x)
{
    struct node* newnode = getnode(x);
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void print()
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}


int main()
{
    printf("Hello world!\n");
    int n,d,x;
    printf("enter the data to append :");scanf("%d",&d);
    printf("enter the size of the list :");scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
       scanf("%d",&x);
       insert(x);
    }
    insertatend(d);
    print();
    return 0;
}
