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
                last -> next = newn;
                last = newn;
                last -> next = first;
            }

            iCount++;
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
        {            
            if(first == NULL && last == NULL)               // Filter
            {
                return;
            }

            PNODE temp = first;
 
            do
            {
                cout<<"| "<<temp->data<<" | -> ";
                temp = temp -> next;
            }while(temp != (last->next));

            cout<<"\n";
        }

        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyCLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of the Elements after INSERT-FIRST, INSERT-LAST are : "<<iRet<<"\n";

    return 0;
}
