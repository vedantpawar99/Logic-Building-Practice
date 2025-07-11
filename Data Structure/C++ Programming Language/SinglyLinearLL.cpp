// Singly Circular Linked List

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

class SinglyLinearLL
{
    private:
        PNODE first;
        int iCount;

    public:
        SinglyLinearLL()
        {
            cout<<"Inside Constructor of Singly LL\n";

            this->first = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next = first;
                first = newn;
            }

            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                temp = first;
                
                while((temp->next) != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newn;
            }

            iCount++;
        }

        void InsertAtPos(int no, int pos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            int i = 0;

            if(pos < 1 && pos > (iCount + 1))
            {
                cout<<"Invalid Position\n";
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == (iCount + 1))
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;

                newn->data = no;
                newn->next = NULL;

                temp = first;

                for(i = 1; i < (pos - 1); i++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                iCount++;
            }
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(first == NULL)
            {
                cout<<"Linked List is Empty";
                return;
            }
            else if(first->next == NULL)
            {
                delete(first);

                first = NULL;
            }
            else
            {
                temp = first;
                first = first->next;

                delete(temp);
            }

            iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(first == NULL)
            {
                cout<<"Linked List is Empty";
                return;
            }
            else if(first->next == NULL)
            {
                delete(first);

                first = NULL;
            }
            else
            {
                temp = first;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }

                delete(temp->next);

                temp->next = NULL;
            }

            iCount--;
        }

        void DeleteAtPos(int pos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;

            int i = 0;

            if(pos < 1 && pos > iCount)
            {
                cout<<"Invalid Position\n";
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for(i = 1; i < (pos - 1); i++)
                {
                    temp = temp->next;
                }
                target = temp->next;
                
                temp->next = target->next;
                
                delete(target);

                iCount--;
            }
        }

        int Count()
        {
            return iCount;
        }

        void Display()
        {
            PNODE temp = NULL;

            if(first == NULL)
            {
                cout<<"Linked List is Empty";
                return;
            }

            temp = first;

            while(temp != NULL)
            {
                cout<<" | "<<temp->data<<" | -> ";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
};

int main()
{
    SinglyLinearLL sobj;

    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Elements in the LL are : "<<iRet<<"\n";

    // sobj.DeleteFirst();
    // sobj.Display();
    // iRet = sobj.Count();
    // cout<<"Number of Elements in the LL after Delete-First are : "<<iRet<<"\n";
    // sobj.DeleteLast();
    // sobj.Display();
    // iRet = sobj.Count();
    // cout<<"Number of Elements in the LL after Delete-Last are : "<<iRet<<"\n";

    sobj.InsertAtPos(105,5);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Elements in the LL after Insert-At-Pos are : "<<iRet<<"\n";

    sobj.DeleteAtPos(5);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Elements in the LL after Delete-At-Pos are : "<<iRet<<"\n";

    return 0;
}


