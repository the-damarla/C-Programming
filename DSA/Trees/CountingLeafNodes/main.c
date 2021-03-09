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

int count = 0;

void traversal(struct node* root)
{
    if(root != NULL)
    {
        if(root->left == NULL && root->right == NULL)
        {
            count = count + 1;
        }
        traversal(root->left);
        traversal(root->right);
    }
}

int main()
{
    printf("Hello world!\n");
    struct node* root = NULL;
    int x;
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
    traversal(root);
    printf("Number of Leaf Nodes are : %d",count);
    return 0;
}
