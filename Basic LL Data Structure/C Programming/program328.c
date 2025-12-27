// Singly-Linear-LinkedList-InsertFirst-Updated Display()-Count-InsertLast-DeleteFirst-DeleteLast
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    newn->next = *first;
    *first = newn;
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)              // If LL is Empty
    {
        *first = newn;
    }
    else                            // LL contains atleast 1 node
    {
        temp = *first;

        while((temp->next) != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE first)
{
    printf("\nSingly LL is : ");

    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n\n");
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

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while((temp -> next -> next) != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);
        temp -> next = NULL;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    
    Display(head);

    iRet = Count(head);

    printf("Number of Elements in the Singly LL after INSERTFIRST are : %d\n",iRet,"\n");

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    
    Display(head);

    iRet = Count(head);

    printf("Number of Elements in the Singly LL after INSERTLAST are : %d\n",iRet);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of Elements in the Singly LL after DELETEFIRST are : %d\n",iRet);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of Elements in the Singly LL after DELETELAST are : %d\n",iRet);

    return 0;
}