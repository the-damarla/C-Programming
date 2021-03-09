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

struct node* findmin(struct node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
};

struct node* Deletenode(struct node* root, int x)
{
    if(root == NULL)
    {
        return root;
    }
    else if(x < root->data)
    {
        root->left = Deletenode(root->left,x);
    }
    else if(x > root->data)
    {
        root->right = Deletenode(root->right,x);
    }

    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            root = NULL;
        }
        else if(root->left == NULL)
        {
            struct node* temp = root;
            root = root->right;
            free(temp);
        }
        else if(root->right == NULL)
        {
            struct node* temp = root;
            root = root->left;
            free(temp);
        }
        else
        {
            struct node* temp = findmin(root->right);
            root->data = temp->data;
            root->right = Deletenode(root->right,temp->data);
        }
    }
    return root;
};

void preorder(struct node* root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
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
    preorder(root);
    printf("\n");
    inorder(root);
    Deletenode(root,5);
    inorder(root);
    return 0;
}
