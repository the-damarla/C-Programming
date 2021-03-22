#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    char data[100];
    struct node* next;
};

struct node* head = NULL;

void insert(char *v)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    strcpy(newnode->data,v);
    newnode->next = head;
    head = newnode;
}

void print()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%s\n",temp->data);
        temp = temp->next;
    }
}

void search(char *v)
{
    struct node* temp = head;
    int k,c=1,n = 1;
    while(temp != NULL)
    {
        temp = temp->next;
        n++;
    }
    temp = head;
    while(temp != NULL)
    {
        k = strcmp(v,temp->data);
        if(k == 0)
        {
            printf("Car parked at : %d\n",c);
            break;
        }
        temp = temp->next;
        c++;
    }
    if(c == n)
    {
        printf("No car with that plate No.\n");
    }
}

int main()
{
    printf("Hello world!\n");
    char v[100];
    /*while(1)   // we can explicitly enter the data into the list
    {
        printf("enter a string : ");scanf("%s",v);
        if(v[0] == '0')
        {
            break;
        }
        else
        {
            insert(v);
        }
    }*/
    insert("MH04CC2");
    insert("MH04CC2820");
    insert("MH04CC3232");
    insert("MH04CC2113");
    insert("MH04CC2878");
    insert("MH04CC2222");
    print();
    printf("\nenter car number to search : ");scanf("%s",v);
    search(v);
    print();
    return 0;
}
