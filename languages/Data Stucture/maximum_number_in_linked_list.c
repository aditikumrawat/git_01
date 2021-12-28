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

int max(struct Node *p)
{
    int m = -32768;
    while (p)
    {
        if(p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m; 
}

int min(struct Node *p)
{
    int minimum = p->data ;
    while (p)
    {
        if(p->data < minimum)
        {
            minimum = p->data;
        }
        p = p->next;
    }
    return minimum; 
}
int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&Arr[i]);
    }
   create(Arr,n);
   printf("%d",max(first));
   printf("\n%d",min(first));
   return 0;
}