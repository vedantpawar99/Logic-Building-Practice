// Doubly-Linear-Linked-List
// Menu Driven Code (User-Interaction)

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
    int iChoice = 0;                        // Accept the Choice From the user
    int iValue = 0;                         // Accept the Value From the user
    int iPos = 0;                          // Accept the Position From the user
    int iRet = 0;                           // Accept the Choice From the user

    printf("--------------------------------------------------------------------\n");
    printf("------------------------ Double Linear Linked List -----------------\n");
    printf("--------------------------------------------------------------------\n\n");

    while(1)
    {
        printf("--------------------------------------------------------------------\n");
        printf("------------------------ Please Select the Option -----------------\n");
        printf("--------------------------------------------------------------------\n\n");
        printf("1 : Insert New Node at First Position\n");
        printf("2 : Insert New Node at Second Position\n");
        printf("3 : Insert New Node to Different Position\n");
        printf("4 : Delete New Node from First Position\n");
        printf("5 : Delete New Node from Last Position\n");
        printf("6 : Delete New Node from Given Position\n");
        printf("7 : Display All the Elements of the Linked List\n");
        printf("8 : Count the Number of Nodes of Linked List\n");
        printf("0 : Terminate the Application\n");
        printf("--------------------------------------------------------------------\n");

        scanf("%d",&iChoice);

        if(iChoice == 1)
        {
            printf("Enter the Data you want to Insert : \n");
            scanf("%d",&iValue);

            InsertFirst(&head,iValue);
        }
        else if(iChoice == 2)
        {
            printf("Enter the Data you want to Insert : \n");
            scanf("%d",&iValue);

            InsertLast(&head,iValue);
        }
        else if(iChoice == 3)
        {
            printf("Enter the Data you want to Insert : \n");
            scanf("%d",&iValue);

            printf("Enter the Position at which you want to Insert New Node : \n");
            scanf("%d",&iValue);

            InsertAtPos(&head,iValue,iPos);
        }
        else if(iChoice == 4)
        {
            printf("Deleting the First Element From Linked List\n");

            DeleteFirst(&head);
        }
        else if(iChoice == 5)
        {
            printf("Deleting the Last Element From Linked List\n");

            DeleteLast(&head);
        }
        else if(iChoice == 6)
        {
            printf("Deleting the Element From given Position from Linked List\n");
            scanf("%d",&iValue);

            printf("Enter the Position at which you want to Insert New Node : \n");
            scanf("%d",&iValue);

            DeleteAtPos(&head,iPos);
        }
        else if(iChoice == 7)
        {
            printf("Elements of the Linked List are : \n");

            Display(head);
        }
        else if(iChoice == 8)
        {
            iRet = Count(head);

            printf("Number of the Elements in the Linked List are : %d\n",iRet);
        }
        else if(iChoice == 0)
        {
            printf("Thank You For using the Application\n");
            break;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }

    return 0;
}