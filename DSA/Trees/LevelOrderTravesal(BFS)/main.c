#include <stdio.h>
#include <stdlib.h>

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
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
};

struct node* insert(struct node* root, int x)
{
    if(root == NULL)
    {
        root = getnode(x);
    }
    else if(x <= root->data)
    {
        root->left = insert(root->left,x);
    }
    else
    {
        root->right = insert(root->right,x);
    }
    return root;
};

int maxDepth(struct node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    else
    {
        int dleft = maxDepth(root->left);
        int dright = maxDepth(root->right);

        if(dleft > dright)
        {
            return dleft + 1;
        }
        else
        {
            return dright + 1;
        }
    }
}

void printGivenlevel(struct node* root, int level)
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
        printGivenlevel(root->left,level-1);
        printGivenlevel(root->right,level-1);
    }
}

void printLevelOrder(struct node* root)
{
    int h = maxDepth(root);
    for(int i=1;i<=h+1;i++)
    {
        printGivenlevel(root,i);
    }
}

int main()
{
    printf("Hello world!\n");
    struct node* root = NULL;
    int x;
    while(1)
    {
        printf("enter number to insert : ");scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            root = insert(root,x);
        }
    }
    printLevelOrder(root);
    return 0;
}
