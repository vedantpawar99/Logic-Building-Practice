// Ready 
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

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

int main()
{
    PNODE head = NULL;
    
    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);

    Display(head);

    return 0;
}