#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second = NULL,*third = NULL;

void create(int Arr[],int n)
{
    struct Node *t,*last;
    first = new Node;
    first->data=Arr[0];
    first->next=NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int Arr[],int n)
{
    struct Node *t,*last;
    second = new Node;
    second->data=Arr[0];
    second->next=NULL;
    last = second;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}


int main()
{
    return 0;
}