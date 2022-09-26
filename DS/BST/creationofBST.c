#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int item)
{
    if (node == NULL)
        return newNode(item);

    if (item < node->data)
        node->left = insert(node->left, item);
    else if (item > node->data)
        node->right = insert(node->right, item);

    return node;
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 80);
    insert(root, 40);
    insert(root, 20);
    insert(root, 30);
    insert(root, 70);
    insert(root, 60);

    inorder(root);
    return 0;
}