#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

int insertLeft(struct node *root);
int insertRight(struct node *root);

void inorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ->", root->item);
    inorderTraversal(root->right);
}

struct node *createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insertNewNode(struct node *temp, int val, int pos, int rem)
{
    struct node *ins , *ptr = createNode(val);
    switch (pos)
    {
    case 1:
        ins = temp->left;
        temp->left = ptr;
        break;
    case 2:
        ins = temp->right;
        temp->right = ptr;
        break;
    }

    switch (rem)
    {
    case 1:
        ptr->left = ins;
        break;
    case 2: 
        ptr->right = ins;
        break;
    }
}

void createTree(struct node *root)
{
    insertLeft(root);
    insertRight(root);
}

int main()
{
    int v;
    printf("Enter the Value of the Root Node: ");
    scanf("%d", &v);
    struct node *root = createNode(v);
    createTree(root);
    printf("\nInorder transversal before Insertion: \n");
    inorderTraversal(root);
    insertNewNode(root->left, 10, 2, 2);
    printf("\nInorder transversal after Insertion: \n");
    inorderTraversal(root);
}

int insertRight(struct node *root)
{
    int n, v;
    printf("Do you have a Right Node?\n1.Yes 2.No\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the Value of the node: ");
        scanf("%d", &v);
        root->right = createNode(v);
        root = root->right;
        insertLeft(root);
        insertRight(root);
        break;
    case 2:
        root->right = NULL;
        return 0;
    }
}

int insertLeft(struct node *root)
{
    int n, v;
    printf("Do you have a Left Node?\n1.Yes 2.No\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the Value of the node: ");
        scanf("%d", &v);
        root->left = createNode(v);
        root = root->left;
        insertLeft(root);
        insertRight(root);
        break;
    case 2:
        root->left = NULL;
        return 0;
    }
}