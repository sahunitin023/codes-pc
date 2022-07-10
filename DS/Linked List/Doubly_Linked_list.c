#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
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

void ins()
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
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        newNode->prev = NULL;
        break;
    case 2: // Insertion at the End
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        temp = head;
        newNode->next = NULL;
        while (temp->next != NULL) // traverse till (temp = last node)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
        break;
    case 3: // Insertion at the Middle
        printf("Enter the position where you wanna insert a node:");
        scanf("%d", &x);
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        temp = head;
        while (x != i + 1) // traverse till (temp = x th node)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        break;
    default:
        break;
    }
}
void del()
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
        head->prev = NULL;
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
        while (x != i + 1)  //For e.g. If x=6 ; temp =5th node
        {
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        temp->next->next->prev = temp;
        break;
    default:
        break;
    }
}
int main()
{
    int n;
    ptr = (struct node *)malloc(10 * sizeof(struct node)); // Memory allocation
    printf("Enter 10 Elements of the Linked List:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &(ptr + i)->data);
    }
    head = ptr;
    for (int i = 0; i < 9; i++) // For forward Link
    {
        (ptr + i)->next = ptr + i + 1;
    }
    (ptr + 9)->next = NULL;
    for (int i = 1; i < 10; i++) // For backward Link
    {
        (ptr + i)->prev = ptr + i - 1;
    }
    ptr->prev = NULL;
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

    return 0;
}