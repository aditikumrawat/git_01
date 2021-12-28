#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int Arr[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = Arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void count(struct Node *p)
{
    int count=0;
    while (p)
    {
        count++;
        p = p->next;
    }
    printf("%d",count);
}

int sum(struct Node *p)
{
    int x=0;
    if(p!=0)
    {
        x = x + sum(p->next) + p->data ;
        return x;
    }
    else
    {
        return 0;
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
   count(first);
   printf("\n%d",sum(first));
   return 0;
}