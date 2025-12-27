// Time-Complexity = N/2 = 1.5

// accept element from user and insert into link-list in sorted order which is Duplicate element

// accept singly LL from user and return the middle element from that LL - (Number of elements = 0)- EMPTY LINKED LIST

// Check wheater the linked list contains the Loop or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertSortedIncUnique(PPNODE first, int no)
{
    PNODE newn = NULL, temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL || (no < (*first) -> data))
    {
        newn->next = *first;
        *first = newn;
    }
    else  
    {
        temp = *first;

        while((temp -> next != NULL) && (temp->next->data < no))
        {
            temp = temp -> next;
        }

        if((temp->next == NULL) && (temp->data == no))
        {
            free(newn);
            return;
        }

        if(temp->next != NULL)
        {
            if((temp->data == no) || (temp->next->data == no))    // Duplicate element
            {
                free(newn);
                return;
            }
        }
    
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckLoop(PNODE first)
{
    bool bFlag = false;

    PNODE teacher = NULL, student = NULL;

    teacher = first;
    student = first;
    
    while((teacher != NULL) && (teacher->next != NULL))
    {
        teacher = teacher->next->next;
        student = student->next;

        if(teacher == student)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    PNODE head = NULL;

    // PNODE last = NULL;
    // PNODE temp = NULL;

    bool bRet = false;

    InsertSortedIncUnique(&head, 11);
    InsertSortedIncUnique(&head, 21);
    InsertSortedIncUnique(&head, 51);
    InsertSortedIncUnique(&head, 101);
    InsertSortedIncUnique(&head, 111);
    InsertSortedIncUnique(&head, 121);

    // last = head->next->next->next->next->next;

    // temp = head->next->next;

    // last->next = temp;

    // Display(head);

    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Loop is there in the Linked List");
    }
    else
    {
        printf("Loop is NOT present in the Linked List");
    }

    return 0;
}
