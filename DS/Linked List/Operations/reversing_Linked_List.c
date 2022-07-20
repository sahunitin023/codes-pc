#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *ptr;
void Display(struct node *ptrf) // Linkes List Transversal
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
void Reverse()
{
    struct node *p = head, *q = NULL, *r = NULL; // Initialising 3 Sliding Pointers.
    while (p != NULL)
    {
        r = q; //Here, q is the pointer whose links are reversing
        q = p;
        p = p->next; // For traversing the sliding pointers
        q->next = r; // Now, q's next is pointing to the previous node of q
    }
    head = q; // Head is now pointing to the last node of the Linked Lists
}

void main()
{
    int n, i, x;
    printf("Enter the number of Nodes: ");
    scanf("%d", &x);
    ptr = (struct node *)malloc(x * sizeof(struct node));
    printf("Enter Elements of the Linked List:\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &(ptr + i)->data);
    }
    head = ptr;
    for (i = 0; i < x - 1; i++)
    {
        (ptr + i)->next = (ptr + i + 1);
    }
    (ptr + x - 1)->next = NULL;
    printf("Before Reversing,\n");
    Display(head);
    Reverse(); // Reversed the Linked Lists Links
    printf("After Reversing,\n");
    Display(head);
}
