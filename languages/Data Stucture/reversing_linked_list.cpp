#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next; 
}*first = NULL;

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

void reverse(struct Node *p)
{
   
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
    int A[] = {50,40,10,30,20};
    create(A,5);
   
    display(first);

    return 0;
}