#include <stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
}*head, *ptr, *ans;

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
struct ListNode* mergeNodes(struct ListNode* head){
    struct ListNode *temp= head , *res = NULL;
    struct ListNode *curr = NULL;
    while(temp!=NULL)
    {
        struct ListNode *newNode;
        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        int sum = 0;
        do
        {
            sum += temp->val;
            temp = temp->next;
        }while(temp!=NULL && temp->val != 0);
        newNode->val = sum;
        newNode->next = NULL;
        if(res == NULL) 
        {
            curr = newNode;
            res = curr;
            
        }
        else
        {
            curr->next = newNode;
            curr = newNode;
        }
        temp = temp->next;
    }
    return res;
}

void main()
{
    int n, i, x;
    printf("Enter the number of Nodes: ");
    scanf("%d", &x);
    ptr = (struct ListNode*)malloc(x * sizeof(struct ListNode));
    printf("Enter Elements of the Linked List:\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &(ptr + i)->val);
    }
    head = ptr;
    for (i = 0; i < x - 1; i++)
    {
        (ptr + i)->next = (ptr + i + 1);
    }
    (ptr + x - 1)->next = NULL;
    printf("INITIALS\n");
    display(head);
    ans = mergeNodes(head);
    printf("After Merging\n");
    display(ans);
}