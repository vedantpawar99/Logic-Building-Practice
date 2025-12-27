// Singly-Linear-LinkedList --- InsertFirst -- Display-[Updated Display() Function]
//  | 11 |->| 21 |->| 51 |->| 101 |->NULL
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;          // Self Referancial Structure
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)      // InsertFirst() Function
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));        // Dynamic Memory Allocation

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)          // LL is empty
    {
        *first = newn;
    }
    else                        // LL contains atleast 1 node
    {
        newn->next = *first;           // eq (1)-- First hold the address
        *first = newn;                 // eq (2)-- then Change the value
    }
}

void InsertLast(PPNODE first, int no)      // InsertLast() Function
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));        // Dynamic Memory Allocation

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)          // LL is empty
    {
        *first = newn;
    }
    else                        // LL contains atleast 1 node
    {
        // Pending
    }
}

void Display(PNODE first)               // Display() Function--Traversal
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);         //Updated Display() Function
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,121);
    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    return 0;
}

