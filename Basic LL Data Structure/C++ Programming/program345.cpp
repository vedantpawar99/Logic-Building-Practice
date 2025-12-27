// Singly Circular Linked List (SinglyCLL)

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        SinglyCLL()
        {
            cout<<"Inside Constructor of SinglyCLL\n";

            this->first = NULL;
            this->last = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if((first == NULL) && (last == NULL))               // if(iCount == 0)  -- If LL is Empty
            {
                first = newn;
                last = newn;

                last -> next = first;
            }
            else                                                // If the LL Contains more than 1 node in LL
            {
                newn -> next = first;
                first = newn;
                last -> next = first;
            }
            
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if((first == NULL) && (last == NULL))               // if(iCount == 0)  -- If LL is Empty
            {
                first = newn;
                last = newn;

                last -> next = first;
            }
            else                                                // If the LL Contains more than 1 node in LL
            {

            }
        }

        void InsertAtPos(int no, int pos)
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}

        void DeleteAtPos(int pos)
        {}

        void Display()
        {}

        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyCLL sobj;

    sobj.InsertLast(51);
    sobj.InsertLast(21);
    sobj.InsertLast(11);

    return 0;
}
