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

void deletealt()
{
    struct node* temp = head;
    int c = 1;
    while(temp->next != NULL)
    {
        c++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0;i<(c/2);i++)
    {
        struct node* temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);
        temp = temp->next;
    }
}

void print()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    printf("Hello world!\n");
    int x;
    while(1)
    {
        printf("enter a number : ");scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else{
            insert(x);
        }
    }
    print();
    printf("\n");
    deletealt();
    print();
    return 0;
}
