#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
    int height;
};

int max(int a, int b);

int height(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return root->height;
}

int max(int a, int b)
{
    return (a>b)?a:b;
}

struct node* getnode(int x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 1;
    return newnode;
};

struct node* rightrotate(struct node* y)
{
    struct node* x = y->left;
    struct node* t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(height(y->left),height(y->right))+1;
    x->height = max(height(x->left),height(x->right))+1;

    return x;
};

struct node* leftrotate(struct node* x)
{
    struct node* y = x->right;
    struct node* t2 = y->left;

    y->left = x;
    x->right = t2;

    x->height = max(height(x->left),height(x->right))+1;
    y->height = max(height(y->left),height(y->right))+1;

    return y;
};

int getbalance(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return height(root->left)-height(root->right);
}

struct node* insert(struct node* root, int x)
{
    if(root == NULL)
    {
        return getnode(x);
    }
    else if(x < root->data)
    {
        root->left = insert(root->left,x);
    }
    else if(x > root->data)
    {
        root->right = insert(root->right,x);
    }
    else
        return root;

    root->height = 1 + max(height(root->left),height(root->right));

    int balance = getbalance(root);

    if (balance > 1 && x < root->left->data)
        return rightrotate(root);

    // Right Right Case
    if (balance < -1 && x > root->right->data)
        return leftrotate(root);

    // Left Right Case
    if (balance > 1 && x > root->left->data)
    {
        root->left =  leftrotate(root->left);
        return rightrotate(root);
    }

    // Right Left Case
    if (balance < -1 && x < root->right->data)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }

    return root;
};

void preorder(struct node* root)
{
    if(root != NULL)
    {
        printf("%d " ,root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    printf("Hello world!\n");
    struct node* root = NULL;
    int x;
    while(1)
    {
        printf("enter a number to insert : ");scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else
        {
            root = insert(root,x);
        }
    }
    preorder(root);
    return 0;
}
