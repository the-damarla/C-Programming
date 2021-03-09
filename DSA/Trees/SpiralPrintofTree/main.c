#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* getnode(int x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = newnode->right = NULL;
    return newnode;
};

struct node* insert(struct node* root,int x)
{
    if(root == NULL)
    {
        root = getnode(x);
    }
    else if(x < root->data)
    {
        root->left = insert(root->left,x);
    }
    else if(x > root->data)
    {
        root->right = insert(root->right,x);
    }
    return root;
};

int height(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else{
        int ld = height(root->left);
        int rd = height(root->right);

        if(ld > rd)
        {
            return ld + 1;
        }
        else
            return rd + 1;
    }
}

void printgivenlevel(struct node* root, int level,int ltr)
{
    if(root == NULL)
    {
        return;
    }
    if(level == 1)
    {
        printf("%d ",root->data);
    }
    else if(level > 1)
    {
        if(ltr)
        {
            printgivenlevel(root->left,level-1,ltr);
            printgivenlevel(root->right,level-1,ltr);
        }
        else
        {
            printgivenlevel(root->right,level-1,ltr);
            printgivenlevel(root->left,level-1,ltr);
        }
    }
}

void printlevel(struct node* root)
{
    int h = height(root);
    bool ltr = false;
    for(int i=1;i<=h;i++)
    {
        printgivenlevel(root,i,ltr);
        ltr = !ltr;
    }
}

int main()
{
    printf("Hello world!\n");
    int x;
    struct node* root = NULL;
    while(1)
    {
        printf("enter a number : ");scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            root = insert(root,x);
        }
    }
    printlevel(root);
    return 0;
}
