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
    newnode->next = head;
    head = newnode;
}

void reverse()
{
    struct node *current, *prev, *next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

}

int convert(int x)
{
    int mul =1;
    if(x == 0)
    {
        mul = 1;
    }
    else
    {
        for(int i=0;i<x;i++)
        {
        mul = mul*2;
        }
    }
    return mul;
}

void binary(int n)
{
    int c=0,sum=0,x=1;
    struct node* temp = head;
    for(int i=0;i<n;i++)
    {
        x = temp->data * convert(c);
        sum = sum + x;
        c++;
        temp = temp->next;
    }
    printf("\n%d",sum);
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
    int n,x;
    printf("enter the size :");scanf("%d",&n);
    printf("\n enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\n");
    binary(n);
    return 0;
}
