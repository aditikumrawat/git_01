#include<stdio.h>

int main()
{
   int T;
   int a,b,c;
   scanf("%d",&T);
   for(int i = 0 ;i<T;i++)
   {
     scanf("%d %d %d",&a,&b,&c);
     if(a==7 || b==7 || c==7)
     {
         printf("YES\n");
     }
     else
     {
         printf("NO\n");
     }
   }
   return 0;
}