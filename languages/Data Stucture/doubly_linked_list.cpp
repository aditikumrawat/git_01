#include<iostream>
using namespace std;

class Node
{
public:
   Node *prev;
   int data;
   Node *next;
};

class doubly_ll
{
private:
    Node *head;
public:
    doubly_ll(int A[],int n);
    void Display();
    int Length();
    //int Delete(int index);
    //void Insert(int index,int x);
    
};

doubly_ll :: doubly_ll(int A[],int n)
{
    Node *t,*last;

    head = new Node;
    head->data = A[0];
    head->prev=head->next=NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }   
}

void doubly_ll :: Display()
{
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int doubly_ll :: Length()
{
    Node *p = head;
    int len=0;
    while (p!=NULL)
    {
        len++;
        p = p->next;
    } 
    return len;
}

int main()
{
    int A[] = {1,2,3,4,5,6,7};
    doubly_ll d(A,7);
    d.Display();
    cout<<d.Length();
    return 0;
}