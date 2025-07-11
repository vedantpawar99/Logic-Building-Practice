// Doubly-Linear-LinkedList-InsertFirst-Updated Display()-Count-InsertLast-DeleteFirst-DeleteLast-InsertAtPos-DeleteAtPos

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

        while(temp->next != NULL)           // Insert 500-- Stop(Last-400)
        {
            temp = temp->next;
        }

        newn->prev = temp;                  // $
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{                                            // Without Using Temp

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
        *first = (*first) -> next;
        free((*first)->prev);
        (*first)-> prev = NULL;
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;                      // Using Loop

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

        while(temp->next != NULL)         // Delete 400 -- Stop(300) Loop Change
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        free(temp); 
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount))
    {
        printf("Invalid Position to Delete the Node\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next; 
        }
        target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        free(target); 
    }
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iCount = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount + 1))
    {
        printf("Invalid Position to Insert New Node\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(first,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;                        // eq(1)
        newn->next->prev = newn;                        // eq(2)
        temp->next = newn;                                  
        newn->prev = temp;
    }
}

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
    printf("Number of Elements after INSERT-FIRST,INSERT-LAST are : %d\n",iRet);

    InsertAtPos(&head,105,5);

    Display(head);

    iRet = Count(head);
    printf("Number of Elements after INSERT-AT-POS are : %d\n",iRet);

    DeleteAtPos(&head,5);

    Display(head);

    iRet = Count(head);
    printf("Number of Elements after DELETE-AT-POS are : %d\n",iRet);

    return 0;
}