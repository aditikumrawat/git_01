#include <stdio.h>

int main() {
   char input, integer = 1;
   printf("Enter the number of row: ");
   scanf("%d", &input);
   for (int i = 1; i <= (input - 1 + 1); ++i) {
      for (int j = 1; j <= i; ++j) {
         printf("%d ", integer);
      }
      ++integer;
      printf("\n");
   }
   return 0;
}
