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

void deletenode(int x)
{
    struct node* temp = head;
    if(x == 1)
    {
        head = temp->next;
    }
    else
    {
        for(int i=1;i<(x-1);i++)
        {
            temp = temp->next;
        }
        struct node* temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);
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

void search(int x, int n)
{
    struct node* temp = head;
    int c=0;
    while(temp->next != NULL)
    {
        if(temp->data == x)
        {
            deletenode(c+1);
            print();
            break;
        }
        c++;
        temp = temp->next;
    }
    if(c == (n-1))
    {
        print();
    }
}


int main()
{
    printf("Hello world!\n");
    int n,x,i,d;
    printf("enter size of the list : ");scanf("%d",&n);
    printf("\n enter the list elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("enter element to delete :");scanf("%d",&d);
    search(d,n);
    return 0;
}
