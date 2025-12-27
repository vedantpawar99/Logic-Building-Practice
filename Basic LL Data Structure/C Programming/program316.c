// Singly-Linear-LinkedList
//  | 11 |->| 21 |->| 51 |->| 101 |->NULL


#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct note *next;          // Self Referancial Structure
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

    newn1 = (struct node *)malloc(sizeof(struct node));             // Dynamic Memory Allocation
    newn2 = (struct node *)malloc(sizeof(struct node));
    newn3 = (struct node *)malloc(sizeof(struct node));

    return 0;
}

