// accept element from user and insert into link-list in sorted order
// increasing order

// no       55
// temp     100

// 12     35      45      89      90      99
// 100    200     300     400     500     600

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

// nodes get inserted in the incresing order
void InsertSortedInc(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    // First Element
    if(*first == NULL)
    {
        *first = newn;
    }
    else    // Second onwards
    {
        if(no < (*first) -> data)   // If it is less than first element
        {
            newn->next = *first;
            *first = newn;
            return;
        }

        temp = *first;

        while(temp -> next != NULL)
        {
            if((temp->data < no) && (temp->next->data > no))
            {
                break;
            }
            temp = temp -> next;
        }

        if(temp->next == NULL && no > temp->data)   // If it is greater than last element
        {
            temp->next = newn;
            return;
        }

        // If it lies in between the Linked-List
        newn->next = temp->next;
        temp->next = newn;
    }
}

void Display(PNODE first)
{
    while(first)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL \n");
}
int main()
{
    PNODE head = NULL;

    InsertSortedInc(&head, 11);
    InsertSortedInc(&head, 7);
    InsertSortedInc(&head, 21);
    InsertSortedInc(&head, 51);
    InsertSortedInc(&head, 40);
    InsertSortedInc(&head, 31);
    InsertSortedInc(&head, 51);
    InsertSortedInc(&head, 75);
    

    Display(head);

    return 0;
}
