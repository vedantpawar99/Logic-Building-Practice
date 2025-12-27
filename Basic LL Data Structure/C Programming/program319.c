// Singly-Linear-LinkedList --- InsertFirst
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

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,51);

    InsertFirst(&head,21);

    InsertFirst(&head,11);


    return 0;
}

