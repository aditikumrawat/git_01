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

struct Node * search(struct Node *p,int key)
{
    while (p!=NULL)
    {
        if (p->data==key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

struct Node * Rsearch(struct Node *p,int key)
{
    if (p==NULL)
       return NULL;
    else
    {
        if(p->data==key)
           return p;
    }
    return Rsearch(p->next,key);
}

int main()
{
    struct Node *temp;
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    create(A,n);
    temp = Rsearch(first,1);
    if(temp)
    {
        cout<<temp->data;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}