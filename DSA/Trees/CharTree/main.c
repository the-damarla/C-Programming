#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node* left;
    struct node* right;
};

struct node* getnode(char x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
};

struct node* insert(struct node* root, char x)
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

void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%c ",root->data);
        inorder(root->right);
    }
}

int main()
{
    printf("Hello world!\n");
    struct node* root = NULL;
    char x;
    int n,c = 0;
    scanf("%d",&n);
    while(1)
    {
        scanf("%c",&x);
        if(c == n*2)
        {
            break;
        }
        else
        {
            root = insert(root,x);
        }
        c++;
    }
    inorder(root->right);
    return 0;
}
