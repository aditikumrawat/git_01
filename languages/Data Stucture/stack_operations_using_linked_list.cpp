#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class stack
{
private:
    node *top;

public:
    stack()
    {
        *top = NULL;
    }
    void Display();
    void push(int x);
    int pop();
    int peek(int index);
    int stackTop();
    int isEmpty();
    int isFull();
    ~stack();
};

void stack ::Display()
{
    node *p = top;
    if (top==NULL)
      return -1;
    else
    {
        while (p != null)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << "\n";
    }
}

void stack :: push(int x)
{
    node *p = new node;
    if (p==NULL)
      return -1;
    else
    {
        p->data = x;
        p->next = top;
        top = p;
    }
        
}

int stack :: pop()
{
   node *p=top;
   int x =-1;
   if(top==-1)
     cout<<"stack is empty";
    else
    {
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

int main()
{

    return 0;
}