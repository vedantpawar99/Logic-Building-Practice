// Doubly Circular LL

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE first,PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        printf("LL is Empty\n");
        return iCount;
    }

    do
    {
        iCount++;
        first = first->next;
    }while(first != last->next);

    return iCount;
}

void InsertFirst(PPNODE first,PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = (*first);
        (*first)->prev = newn;
        (*first) = newn;
    }

    (*first)->prev = (*last);
    (*last)->next = (*first);
}

void InsertLast(PPNODE first,PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last)->next = newn;
        newn->prev = (*last);
        (*last) = newn;
    }

    (*first)->prev = (*last);
    (*last)->next = (*first);
}

void InsertAtPos(PPNODE first,PPNODE last, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first,*last);

    if(pos < 1 || pos > (iCount + 1))
    {
        printf("Invalid Position\n");
        return;
    }
    
    if(pos == 1)
    {
        InsertFirst(first,last,no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(first,last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < (pos - 1);iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE first,PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        printf("Linked List is Empty");
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        (*first) = (*first)->next;
        free((*last)->next);

        (*last)->next = (*first);
        (*first)->prev = (*last);
    }
}

void DeleteLast(PPNODE first,PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        printf("Linked List is Empty");
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        (*last) = (*last)->prev;
        free((*last)->next);

        (*last)->next = (*first);
        (*first)->prev = (*last);
    }
}

void DeleteAtPos(PPNODE first,PPNODE last, int pos)
{
    PNODE temp = NULL;

    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first,*last);

    if(pos < 1 || pos > iCount)
    {
        printf("Invalid Position\n");
        return;
    }
    
    if(pos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(pos == iCount)
    {
        DeleteLast(first,last);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

    }
}

void Display(PNODE first, PNODE last)
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        printf("Linkled List is Empty\n");
        return;
    }

    temp = first;
    do
    {
        printf("| %d | <=> ",temp->data);
        temp = temp->next;
    }while(temp != first);

    printf("\n");
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of Elements in the LL are : %d\n",iRet);

    // DeleteFirst(&head,&tail);
    // Display(head,tail);
    // iRet = Count(head,tail);
    // printf("Number of Elements in the LL after Delete-First are : %d\n",iRet);
    // DeleteLast(&head,&tail);
    // Display(head,tail);
    // iRet = Count(head,tail);
    // printf("Number of Elements in the LL after Delete-Last are : %d\n",iRet);

    InsertAtPos(&head,&tail,105,5);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of Elements in the LL after Insert-At-Pos are : %d\n",iRet);

    DeleteAtPos(&head,&tail,5);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of Elements in the LL after Delete-At-Pos are : %d\n",iRet);

    return 0;
}