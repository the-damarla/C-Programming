#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node* next;
};

struct node* top = NULL;

struct node* getnode(char item)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    return newnode;
};

void push(char item)
{
    struct node* newnode = getnode(item);
    newnode->next = top;
    top = newnode;
}

void insertatend(char item)
{
    struct node* newnode = getnode(item);
    if(top == NULL)
    {
        top = newnode;
    }
    else
    {
        struct node* temp = top;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void pop()
{
    struct node* temp = top;
    top = temp->next;
    free(temp);
}


int main()
{
    int n = 200, c = 0;
    char *p = (char *)malloc(n*sizeof(char));
    gets(p);
    while(*(p+c) != '\0')
    {
        if(*(p+c) == '{' || *(p+c) == '[' || *(p+c) == '(')
            {
                push(*(p+c));
            }
        else if(*(p+c) == ')' || *(p+c) == ']' || *(p+c) == '}')
        {
            char s = top->data;
            if(*(p+c) == ')')
            {
                if(s == '(')
                {
                    pop();
                }
                else
                {
                    break;
                }
            }
            if(*(p+c) == '}')
            {
                if(s == '{')
                {
                    pop();
                }
                else
                {
                    break;
                }
            }
            if(*(p+c) == ']')
            {
                if(s == '[')
                {
                    pop();
                }
                else
                {
                    break;
                }
            }
        }
        c++;
    }
    if(top == NULL)
    {
        printf("\n\nBalanced");
    }
    else
    {
        printf("\n\nImbalanced paranthesis");
    }
    return 0;
}
