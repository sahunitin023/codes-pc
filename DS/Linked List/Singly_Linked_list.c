#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *ptr;
void display(struct node *ptrf) // Linkes List Transversal
{
    int i = 1;
    struct node *temp = ptrf;
    while (temp != NULL)
    {
        printf("Element %d: %d\n", i, temp->data);
        temp = temp->next;
        i++;
    }
}

void ins() // INSERTION
{
    int n, i = 0, x;
    struct node *newNode, *temp;
    printf("Where do you want to insert your node?\n");
    printf("1.Beginning\n2.End\n3.Middle\n");
    scanf("%d", &n);
    newNode = (struct node *)malloc(sizeof(struct node));
    switch (n)
    {
    case 1: // Insertion at the Beginning
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
        break;
    case 2: // Insertion at the End
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        temp = head;
        newNode->next = NULL;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        break;
    case 3: // Insertion at the Middle
        printf("Enter the position where you wanna insert a node:");
        scanf("%d", &x);
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        temp = head;
        while (x != i + 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        break;
    default:
        break;
    }
}

void del() // DELETION
{
    int n, i = 1, x;
    printf("Where do you want to Delete your node?\n");
    printf("1.Beginning\n2.End\n3.Middle\n");
    scanf("%d", &n);
    struct node *temp = head;
    switch (n)
    {
    case 1: // Deletion at the Beginning
        head = head->next;
        break;
    case 2: // Deletion at the End
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        break;
    case 3: // Deletion at the Middle
        printf("Enter which node you want to delete:");
        scanf("%d", &x);
        while (x != i + 1)             //For e.g. If x=6 ; temp =5th node
        {
            temp = temp->next;
            i++;
        }
        temp->next = (temp->next)->next;
        break;
    default:
        break;
    }
}
void main()
{
    int n, i;
    ptr = (struct node *)malloc(10 * sizeof(struct node));
    printf("Enter 10 Elements of the Linked List:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &(ptr + i)->data);
    }
    head = ptr;
    for (i = 0; i < 9; i++)
    {
        (ptr + i)->next = (ptr + i + 1);
    }
    (ptr + 9)->next = NULL;
    while (1)
    {
        printf("Enter\n1.Insert a node\n2.Delete a node\n3.Display the Linked list\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            ins();
            break;
        case 2:
            del();
            break;
        case 3:
            display(head);
        }
    }
}
