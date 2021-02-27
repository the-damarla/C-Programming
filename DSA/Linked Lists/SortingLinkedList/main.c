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

void sort(int n)
{
    struct node* temp = head;
    struct node* end = NULL;
    int i,x;
    for(i=0;i<n;i++)
    {
        temp = head;
        while(temp->next !=  end)
        {
            if(temp->data > temp->next->data)
            {
                x = temp->data;
                temp->data = temp->next->data;
                temp->next->data = x;
            }
            temp = temp->next;
        }
        end = temp;
    }
    printf("\n After sorting : ");print();
}

int main()
{
    printf("Hello world!\n");
    int n,x,i;
    printf("enter the size of the list :");scanf("%d",&n);
    printf("\n enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\n Before sorting : ");print();
    sort(n);
    return 0;
}
