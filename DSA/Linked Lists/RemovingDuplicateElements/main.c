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

void print()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void duplicate(int n)
{
    struct node* temp = head;
    struct node* temp1;
    while(temp->next != NULL)
    {
        if(temp->data == temp->next->data)
        {
            temp1 = temp->next->next;
            free(temp->next);
            temp->next = temp1;
        }
        else
        {
            temp = temp->next;
        }

    }
    printf("\n After deleting duplicate node : ");
    print();
}

void sort(int n)
{
    struct node* temp = head;
    struct node* end = NULL;
    for(int i=0;i<n;i++)
    {
        temp = head;
        while(temp->next != end)
        {
            if(temp->data > temp->next->data)
            {
                int x = temp->data;
                temp->data = temp->next->data;
                temp->next->data = x;
            }
            temp = temp->next;
        }
        end = temp;
    }
    printf("\n after sorting :");print();
    duplicate(n);
}

int main()
{
    printf("Hello world!\n");
    int n,x;
    printf("enter size of the list : ");scanf("%d",&n);
    printf("\n enter list elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    print();
    sort(n);
    return 0;
}
