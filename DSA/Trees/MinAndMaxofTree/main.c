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

struct node* insert(struct node* root,int x)
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

int minoftree(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    while(root->left != NULL)
    {
        root = root->left;
    }
    printf("Min of the given tree is : %d",root->data);
    return 0;
}

int maxoftree(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    while(root->right != NULL)
    {
        root = root->right;
    }
    printf("\nMax of the tree is : %d",root->data);
    return 0;
}

int main()
{
    printf("Hello world!\n");
    struct node* root = NULL;
    while(1)
    {
        printf("enter a number to insert : ");int x;scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            root = insert(root,x);
        }
    }
    minoftree(root);
    maxoftree(root);
    return 0;
}
