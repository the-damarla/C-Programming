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

void median(int n)
{
    int i;
    struct node* temp = head;
    if(n%2 != 0)
    {
        for(i=0;i<n/2;i++)
        {
            temp = temp->next;
        }
        printf("%d ",temp->data);
    }
    else
    {
        for(i=0;i<n/2;i++)
        {
            temp = temp->next;
        }
        printf("%d ",temp->data);
        temp = temp->next;
        printf("%d",temp->data);
    }
}

int main()
{
    printf("Hello world!\n");
    int n,x,i;
    printf("size of linked list : ");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    median(n);
    return 0;
}
