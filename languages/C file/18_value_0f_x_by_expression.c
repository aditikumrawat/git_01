#include<stdio.h>

int main()
{
   // x1,x2,x3 are the given expresssions
   int x1 = 7+3*6/2-1 ;
   //7+18/2-1
   //7+9-1
   //16-1
   //15:Ans
   int x2 = 2%2+2*2-2/2;
   //0+2*2-2/2
   //0+4-2/2
   //0+4-1
   //3:Ans 
   int x3 = (3*9*(3+(9*3/(3))));
   //(3*9*(3+(9*3/3)))
   //(3*9*(3+(27/3)))
   //(3*9*(3+9))
   //(3*9*(12))
   //(27*12)
   //324:Ans
   printf("%d\n",x1);
   printf("%d\n",x2);
   printf("%d",x3);
   return 0;
}