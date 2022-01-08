#include<iostream>
using namespace std;

//MENU DRIVEN PROGRAMME OF STACK USING ARRAY


// struct stack
// {
//     int size;
//     int top;
//     int *s;
// };

// void create(struct stack *st,int si)
// {
//     st->size=si;
//     st->top=-1;
//     st->s = new int[st->size];
// }

// void Display(struct stack st)
// {
//     for (int i = st.top; i >= 0; i--)
//     {
//         cout<<st.s[i]<<" ";
//     }
//     cout<<"\n";
// }

// void push(struct stack *st,int x)
// {
//     if (st->top==st->size-1)
//       cout<<"Stack is overflow\n";
//     else
//     {
//         st->top++;
//         st->s[st->top] = x;
//     }
    
// }

// int pop(struct stack *st)
// {
//     int x=-1;
//     if(st->top==-1)
//       cout<<"Stack is Empty\n";
//     else
//     {
//         x = st->s[st->top--];
//     }
//     return x;
// }

// int peek(struct stack st,int index)
// {
//    int x =-1;
//    if ((st.top-index+1)<0)
//       return -1;
//     else
//     {
//         x = st.s[st.top-index+1];
//     }
//     return x;
// }

// int stackTop(struct stack st)
// {
//     if(st.top==-1)
//       return -1;
//     else
//     {
//         return st.s[st.top];
//     }
    
// }

// int isE

// int main()
// {
//     struct stack obj_st;
//     create(&obj_st,6);

//     push(&obj_st,10);
//     push(&obj_st,20);
//     push(&obj_st,30);
//     push(&obj_st,40);
//     push(&obj_st,50);
//     cout<<stackTop(obj_st);
//     return 0;
// }



class stack{
public:
    int size;
    int top;
    int *s;
};

class Ostack
{
private:
    stack *st;
public:
    Ostack(int si){
        
        st->top = -1;
        st->size = si;
        st->s =  new int[st->size];
    }
    void Display();
    void push(int x);
    int pop();
    int peek(int index);
    int stackTop();
    int isEmpty();
    int isFull();
    ~Ostack(){
        delete st->s;
    }
};

void Ostack :: Display()
{
    for (int i = st->top; i >= 0; i--)
    {
        cout<<st->s[i]<<" ";
    }  
    cout<<"\n";
}
void Ostack :: push(int x)
{
   if (st->top==st->size-1)
    cout<<"Stack is overflow";
   else
   {
       st->top++;
       st->s[st->top] = x;
   }
}

int Ostack :: pop()
{
    int x = -1;
    if(st->top==-1)
      cout<<"Stack is empty";
    else
    {
        x = st->s[st->top--];
    }
    return x;
}

int Ostack ::peek(int index)
{
    int x = -1;
    if ((st->top-index+1)<0)
      cout<<"Index is invalid.";
    else
    {
       x = st->s[st->top-index + 1];   
    }
    return x;
}

int Ostack :: stackTop()
{
    int x=-1;
    if(st->top==-1)
      return -1;
    else
    {
        x = st->s[st->top]; 
    }
    return x;
}

int Ostack :: isEmpty()
{
    return (st->top==-1)?1:0;
}

int Ostack :: isFull()
{
    return (st->top==st->size-1)?1:0;
}

int main()
{
    Ostack os(6);
    os.push(10);
    os.push(20);
    os.push(30);
    os.push(40);

    os.Display();
    return 0;
}