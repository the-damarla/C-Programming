#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node* next;
};

struct node* head = NULL;

struct node* getnode(char x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
};

void push(char x)
{
    struct node* newnode = getnode(x);
    newnode->next = head;
    head = newnode;
}

void compare(char *p)
{
    struct node* temp = head;
    int c = 0, k = 0;
    while(temp != NULL)
    {
        if(*(p+c) == temp->data)
        {
            k++;
        }
        c++;
        temp = temp->next;
    }
    if(k == c)
    {
        printf("%s is a palindrome",p);
    }
    else
    {
        printf("%s Not a palindrome",p);
    }
}

int main()
{
    printf("Hello world!\n");
    int n = 200,c = 0;
    char *p = (char*)malloc(n*sizeof(char));
    gets(p);
    while(*(p+c) != '\0')
    {
        push(*(p+c));
        c++;
    }
    compare(p);
    return 0;
}
