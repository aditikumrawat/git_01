#include<stdio.h>

void input(int*p,int n);
int main()
{
   int element[20];
   int num;
   int n;
   while (1)
   {
       printf("Choose the operation you want on an array\n");
       printf("1.Input\n");
       printf("2.Output\n");
       printf("3.Searching\n");
       printf("4.Delete\n");
       printf("5.Insert\n");
       printf("6.Exit\n");
       scanf("%d",&num);
       if(num==6)
       {
           break;
       }
       switch (num)
       {
       case 1:
           printf("Enter the number of element you want to enter:");
           scanf("%d",&n);
           input(element,n);
           break;
       
       default:
           printf("Invalid option choosen.....");
           break;
       }
   }
   
   return 0;
}

void input(int*p,int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("Enter the element %d :",i+1);
        scanf("%d",p[i]);
    }
}
