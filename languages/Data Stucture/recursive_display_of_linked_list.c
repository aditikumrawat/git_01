#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int Arr[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
//recursive function of display
void display(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d",p->data);
        printf(" ");
        display(p->next);
    }
}
int main()
{
   int n;
   scanf("%d",&n);
   int A[n];
   for (int i = 0; i < n; i++)
   {
       scanf("%d",&A[i]);
   }
   create(A,n);
   display(first);
   return 0;
}