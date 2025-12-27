// Singly-Linear-LinkedList-InsertFirst-Updated Display()-Count-InsertLast
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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));        // Dynamic Memory Allocation

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)          // LL is empty
    {
        *first = newn;
    }
    else                        // LL contains atleast 1 node
    {
        temp = *first;
        
        while((temp->next) != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE first)               // Display() Function--Traversal
{
    printf("\nSingly LL is :- ");
    
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);         //Updated Display() Function
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)               // Count() Function--Traversal
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;         
        first = first->next;
    }
    return iCount;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);

    printf("\nNumber of Elements in the Singly LL are : %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    Display(head);

    iRet = Count(head);

    printf("\nNumber of Elements in the NEW Singly LL are : %d\n",iRet);

    return 0;
}

