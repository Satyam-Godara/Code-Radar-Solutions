#include <stdio.h>
int main() {
   int i, j,input;
   char , alphabet = 'A';
//    printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%d", &input);
   for (i = 1; i <=input; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}
