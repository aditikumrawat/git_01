#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;   
};

class Circular_LL
{
private:
    Node *head;
public:
    Circular_LL(int A[],int n);
    void Display();
    void recursiveDisplay(Node *p);
    ~Circular_LL();
    int Length();
    int Delete(int index);
    Node * getHead()
    {
        return head;
    }
};

Circular_LL :: Circular_LL(int A[],int n)
{
    Node *t, *tail=NULL;
   
    head = new Node;
    head->data = A[0];
    head->next = head;
    tail = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = tail->next;
        tail->next = t;
        tail = t;
    }
}

void Circular_LL :: Display()
{
    Node *p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
    cout<<endl;
}

void Circular_LL :: recursiveDisplay(Node *p)
{
    static int flag = 0;
    if(p != head  || flag == 0)
    {
        flag = 1;
        cout<<p->data<<" ";
        recursiveDisplay(p->next);
    }
    flag=0;
}

int Circular_LL :: Length()
{
    Node *p = head;
    int len = 0;
    do
    {
      len++;
      p = p->next;
    } while (p!=head);
    return len;
}

int Circular_LL :: Delete(int index)
{
    Node *p=head,*q;
    int x;
     
    if(index < 0 || index > Length())
      return -1;
    if (index==1)
    {
        while (p->next!=head)
        {
           p = p->next;
           x = head->data;
        }
        if(head==p)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for (int i = 0; i < index-2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}

Circular_LL :: ~Circular_LL()
{
    Node *p=head;
    while (p->next!=head)
    {
      p = p->next;
    }
    
    while (p!=head)
    {
       p->next = head->next;
       delete head;
       head = p->next; 
    }

    if(p==head)
    {
        delete head;
        head = nullptr; 
    }
    
}

int main()
{
    int A[] = {10,20,30,40,60,80};
    Circular_LL c(A,6);
    c.Display();
    cout<<c.Delete(4);
    return 0;
}