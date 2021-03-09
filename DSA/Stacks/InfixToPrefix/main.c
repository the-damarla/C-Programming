#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char item)
{
    if(top >= SIZE - 1)
    {
        printf("\nOVERFLOW of Stack");
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}

char pop()
{
    char item;
    if(top < 0)
    {
        printf("\nUnderFLow");
        getchar();
        exit(1);
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

int is_operator(char symbol)
{
    if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char symbol)
{
    if(symbol == '^')
    {
        return 3;
    }
    else if(symbol == '/' || symbol == '*')
    {
        return 2;
    }
    else if(symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void infixtopostfix(char revfix[], char postfix[])
{
    int i,j;
    char item,x;
    push('(');
    strcat(revfix,")");
    i = 0;j = 0;
    item = revfix[i];
    while(item != '\0')
    {
        if(item == '(')
        {
            push(item);
        }
        else if(isdigit(item) || isalpha(item))
        {
            postfix[j] = item;
            j++;
        }
        else if(is_operator(item) == 1)
        {
            x = pop();
            while(is_operator(item) == 1 && precedence(x)>=precedence(item))
            {
                postfix[j] = x;
                j++;
                x = pop();
            }
            push(x);
            push(item);
        }
        else if(item == ')')
        {
            x = pop();
            while(x != '(')
            {
                postfix[j] = x;
                j++;
                x = pop();
            }
        }
        else
        {
            printf("Invalid expression");
            getchar();
            exit(1);
        }
        i++;
        item = revfix[i];
    }
    if(top > 0)
    {
        printf("invalid");getchar();exit(1);
    }

    if(top > 0)
    {
        printf("invalid");getchar();exit(1);
    }

    postfix[j] = '\0';
}

int main()
{
    printf("Hello world!\n");

    char infix[SIZE], postfix[SIZE];
    printf("enter expression : ");
    gets(infix);
    strrev(infix);
    int c = 0;
    while(infix[c] != '\0')
    {
        if(infix[c] == '(')
        {
            infix[c] = ')';
        }
        else if(infix[c] == ')')
        {
            infix[c] = '(';
        }
        c++;
    }
    infixtopostfix(infix,postfix);
    strrev(postfix);
    puts(postfix);
    return 0;
}
