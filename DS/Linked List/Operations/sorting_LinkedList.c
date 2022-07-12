#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *ptr, *head;
void display(struct node *ptrf)
{
    struct node *temp = ptrf;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void sort(int n)
{
    struct node *temp = head;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = (temp + i)->data;
        while ((temp + j)->data > x && j > -1)
        {
            (temp + j + 1)->data = (temp + j)->data;
            j--;
        }
        (temp + j + 1)->data = x;
    }
}

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    ptr = (struct node *)malloc(n * sizeof(struct node));
    printf("Enter the elements of the Nodes: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(ptr + i)->data);
    }
    head = ptr;
    for (int i = 0; i < n - 1; i++)
    {
        (ptr + i)->next = (ptr + i + 1);
    }
    (ptr + n - 1)->next = NULL;
    printf("Unsorted Linked List :\n");
    display(head);
    printf("\nSorted Linked List :\n");
    sort(n);
    display(head);
    return 0;
}