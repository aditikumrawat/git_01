#include<bits/stdc++.h>
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
    struct Node *q = NULL;
    while (p!=NULL)
    {
        q=p;
        if (p->data==key)
        { 
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
	struct Node *temp;
    //int n;
    //cin>>n;
    int A[10]={1,12,3,4,25,16,7,28,9,10};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>A[i];
    // }
    create(A,10);
    temp = search(first,25);
    if(temp)
    {
        cout<<temp->data<<endl;
    }
    else
    {
        cout<<"0";
    }
    Display(first);
    return 0;
}