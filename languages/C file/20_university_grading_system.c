#include <stdio.h>

int main()
{
   printf("Your semester result grade calulation......\n");
   float points_earned, total_credit_point, total_grade_point, N;
   char module_sign = '%';
   printf("Enter your total credit points earned in semester = ");
   scanf("%f", &points_earned);
   total_credit_point = 23;
   //total subject credit points out of which student will get the credit points
   printf("Enter your total grade points earned in semester = ");
   scanf("%f", &total_grade_point);
   N = total_grade_point / total_credit_point;
   if (N < 5.0)
   {
      printf("Your percentage is %0.2f%c and you are Fail\n", N, module_sign);
   }
   else if (N >= 5.0 && N < 5.5)
   {
      printf("Your percentage is %0.2f%c and you are Third division \"PASS\"\n", N, module_sign);
   }
   else if (N >= 5.5 && N < 6.5)
   {
      printf("Your percentage is %0.2f%c and you are Second Division \"PASS\"\n", N, module_sign);
   }
   else if (N >= 6.5 && N < 7.5)
   {
      printf("Your percentage is %0.2f%c and you are First Division \"PASS\"\n", N, module_sign);
   }
   else
   {
      printf("Your percentage is %0.2f%c and you are \"PASS\" with DISTINCTION\n", N, module_sign);
   }
   return 0;
}