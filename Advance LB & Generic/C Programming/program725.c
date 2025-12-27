// accept element from user and insert into link-list in sorted order
// increasing order

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PNODE;

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

    Display(head);

    return 0;
}
