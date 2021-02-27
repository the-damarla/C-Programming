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

void search(int x, int n)
{
    struct node* temp = head;
    int c=0;
    while(temp->next != NULL)
    {
        if(temp->data == x)
        {
            printf("Found : %d", temp->data);
            break;
        }
        temp= temp->next;
        c++;
    }
    if(c==(n-1))
    {
        printf("NO : %d",x);
    }
}

void print()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }
}

int main()
{
    printf("Hello world!\n");
    int x,s,n;
    printf("enter size of list : ");scanf("%d",&n);
    printf("\n enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\n The list is : ");print();
    printf("\n Enter element to search :");scanf("%d",&s);
    search(s,n);
    return 0;
}
