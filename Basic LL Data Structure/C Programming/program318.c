// Singly-Linear-LinkedList
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

int main()
{
    PNODE head = NULL;          // struct node * => PNODE

    PNODE newn1 = NULL;
    PNODE newn2 = NULL;
    PNODE newn3 = NULL;

    newn1 = (PNODE)malloc(sizeof(NODE));             // Dynamic Memory Allocation
    newn2 = (PNODE)malloc(sizeof(NODE));             // struct node => NODE
    newn3 = (PNODE)malloc(sizeof(NODE));            // struct node * => PNODE

    newn1->data = 11;
    newn2->data = 21;
    newn3->data = 51;

    newn1->next = newn2;
    newn2->next = newn3;
    newn3->next = NULL;

    head = newn1;

    printf("%d\n",head->data);
    printf("%d\n",head->next->data);
    printf("%d\n",head->next->next->data);

    return 0;
}

