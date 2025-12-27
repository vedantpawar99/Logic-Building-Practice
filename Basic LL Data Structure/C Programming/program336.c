// Doubly-Linear-Linked-List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;                      // $
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    printf("NULL <=> ");

    while(first != NULL)
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }

    printf(" NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;                          // $

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev= newn;               // $
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;                          // $

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newn->prev = temp;                  // $
        temp->next = newn;
    }
}

void InsertAtPos(PPNODE first, int no, int pos)
{}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;                       // Using Temp

    if(*first == NULL)                      // If LL is Empty
    {
        return;
    }
    else if((*first) -> next == NULL)         // If LL contains only 1 node
    {
        free(*first);
        *first = NULL;
    }
    else                                    // If LL contains more than 1 node 
    {
        temp = *first;

        *first = (*first) -> next;
        free(temp);
        (*first)-> prev = NULL;
    }
}

void DeleteLast(PPNODE first)
{
    if(*first == NULL)                      // If LL is Empty
    {
        return;
    }
    else if((*first) -> next == NULL)         // If LL contains only 1 node
    {
        free(*first);
        *first = NULL;
    }
    else                                    // If LL contains more than 1 node 
    {

    }
}

void DeleteAtPos(PPNODE first, int pos)
{}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);
    printf("Number of Elements are : %d\n",iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of Elements after DELETEFIRST : %d\n",iRet);

    return 0;
}