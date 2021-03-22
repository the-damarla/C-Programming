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

void binary(int n)
{
    int a[1000] = {0};
    int c = 0;
    while(n>0)
    {
        a[c] = n % 2;
        n = n / 2;
        c++;
    }
    for(int i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}


void converter(int n)
{
    int x;
    struct node* temp = head;
    for(int i=0;i<n;i++)
    {
        x = temp->data;
        binary(x);
        temp = temp->next;
    }
}


int main()
{
    printf("Hello world!\n");
    int x,c=0;
    while(1)
    {
        printf("enter a number : ");scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            insert(x);
            c++;
        }
    }
    converter(c);
    return 0;
}
