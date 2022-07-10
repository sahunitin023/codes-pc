#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *ptr;
void display(struct node *ptrf)
{
    int i = 1;
    struct node *temp = ptrf;
    do
    {
        printf("Element %d: %d\n", i, temp->data);
        temp = temp->next;
        i++;
    } while (temp != head);
}

void ins()
{
    int n, i = 0, x;
    struct node *newNode, *temp;
    temp = head;
    printf("Where do you want to insert your node?\n");
    printf("1.Beginning\n2.End\n3.Middle\n");
    scanf("%d", &n);
    newNode = (struct node *)malloc(sizeof(struct node));
    switch (n)
    {
    case 1:
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        do
        {
            temp = temp->next;
        } while (temp->next != head);
        newNode->next = head;
        head = newNode;
        temp->next = head;
        break;
    case 2:
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
        do
        {
            temp = temp->next;
        } while (temp->next != head);
        temp->next = newNode;
        newNode->next = head;
        break;
    case 3:
        printf("Enter the position where you wanna insert a node:");
        scanf("%d", &x);
        printf("Enter new Element data:");
        scanf("%d", &newNode->data);
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

void del()
{
    int n;
    int x, i = 1;
    printf("Which Node you wanna Delete?\n");
    printf("1.Beginning\n2.End\n3.Middle\n");
    scanf("%d", &n);
    struct node *temp = head;
    switch (n)
    {
    case 1:
        do
        {
            temp = temp->next;
        } while (temp->next != head);
        temp->next = head->next;
        head = head->next;
        break;
    case 2:
        do
        {
            temp = temp->next;
        } while (temp->next->next != head);
        temp->next = head;
        break;
    case 3:
        printf("Enter which node you want to delete: ");
        scanf("%d", &x);
        while (x != i + 1)        //For e.g. If x=6 ; temp =5th node
        {
            temp = temp->next;
            i++;
        }
        temp->next=temp->next->next;
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
    (ptr + 9)->next = head;
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
            break;
        default:
            break;
        }
    }
}
