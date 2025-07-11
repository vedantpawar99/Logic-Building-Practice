// Doubly Linear Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLinearLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLinearLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyLinearLL :: DoublyLinearLL()
{
    cout<<"\nInside the Constructor of Doubly Linear LL\n";

    first = NULL;
    iCount = 0;
}

int DoublyLinearLL :: Count()
{
    return iCount;
}

void DoublyLinearLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    iCount++;
}

void DoublyLinearLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

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

void DoublyLinearLL :: InsertAtPos(int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > (iCount + 1))
    {
        cout<<"Invalid Position to Insert\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

void DoublyLinearLL :: DeleteFirst()
{
    PNODE temp = NULL;
    
    if(first == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    else if((first->next) == NULL)
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

void DoublyLinearLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    else if((first->next) == NULL)
    {
        delete(first);

        first = NULL;
    }
    else
    {
        temp = first;

        while((temp->next->next) != NULL)
        {
            temp = temp->next;
        }
        
        delete(temp->next);

        temp->next = NULL;
    }

    iCount--;
}

void DoublyLinearLL :: DeleteAtPos(int pos)
{
    PNODE temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid Position to Insert\n";
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

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        delete(temp->next->prev);

        temp->next->prev = temp;

        iCount--;
    }
}

void DoublyLinearLL :: Display()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        cout<<"Linked List is Empty";
        return;
    }

    temp = first;

    cout<<"NULL <=> ";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
    DoublyLinearLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of Elements in the Linked List are : "<<iRet<<"\n";

    // dobj.DeleteFirst();
    // dobj.Display();
    // iRet = dobj.Count();
    // cout<<"Number of Elements in the Linked List after Delete-first are : "<<iRet<<"\n";
    // dobj.DeleteLast();
    // dobj.Display();
    // iRet = dobj.Count();
    // cout<<"Number of Elements in the Linked List after Delete-Last are : "<<iRet<<"\n";

    dobj.InsertAtPos(105,5);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of Elements in the Linked List after Insert-At-Pos are : "<<iRet<<"\n";

    dobj.DeleteAtPos(5);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of Elements in the Linked List after Delete-At-Pos are : "<<iRet<<"\n";

    return 0;
}