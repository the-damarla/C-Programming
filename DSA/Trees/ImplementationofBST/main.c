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
}

void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    printf("\n");
}

int search(struct node* root, int x)
{
    if(root == NULL)
    {
        return 1;
    }
    else if(x == root->data)
    {
        return 0;
    }
    else if(x < root->data)
    {
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
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
    inorder(root);
    printf("enter a number to search : ");scanf("%d",&x);
    if(search(root,x) == 0)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot Found");
    }
    return 0;
}
