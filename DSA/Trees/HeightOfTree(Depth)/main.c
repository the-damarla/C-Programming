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
            return dleft+1;
        }
        else
        {
            return dright + 1;
        }
    }
}

int main()
{
    printf("Hello world!\n");
    struct node* root = NULL;
    int x;
    while(1)
    {
        printf("Enter a number to insert : ");scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            root = insert(root,x);
        }
    }
    x = maxDepth(root);
    printf("\n\n Height of the tree : %d",x);
    return 0;
}
