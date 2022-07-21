#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
} * head1, *ptr, *head2, *ptr2 , *ans;
void display(struct ListNode *ptrf) // Linkes List Transversal
{
    int i = 1;
    struct ListNode *temp = ptrf;
    while (temp != NULL)
    {
        printf("Element %d: %d\n", i, temp->val);
        temp = temp->next;
        i++;
    }
}
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *l3 = NULL;
    struct ListNode *curr = NULL;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0)
    {
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        newNode->val = (sum % 10);
        newNode->next = NULL;
        if (l3 == NULL)
        {
            l3 = curr = newNode;
        }
        else
        {
            curr->next = newNode;
            curr = newNode;
        }
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
    }
    return l3;
}
void main()
{
    int i, x;
    printf("Enter the number of Nodes of 1st Linked List: ");
    scanf("%d", &x);
    ptr = (struct ListNode *)malloc(x * sizeof(struct ListNode));
    printf("Enter Elements of the Linked List:\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &(ptr + i)->val);
    }
    head1 = ptr;
    for (i = 0; i < x - 1; i++)
    {
        (ptr + i)->next = (ptr + i + 1);
    }
    (ptr + x - 1)->next = NULL;

    int y;
    printf("Enter the number of Nodes of 2st Linked List: ");
    scanf("%d", &y);
    ptr2 = (struct ListNode *)malloc(y * sizeof(struct ListNode));
    printf("Enter Elements of the Linked List:\n");
    for (i = 0; i < y; i++)
    {
        scanf("%d", &(ptr2 + i)->val);
    }
    head2 = ptr2;
    for (i = 0; i < y - 1; i++)
    {
        (ptr2 + i)->next = (ptr2 + i + 1);
    }
    (ptr2 + y - 1)->next = NULL;
    ans = addTwoNumbers(head1, head2);
    display(ans);
}
