#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
//    printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%d", &input);
   for (i = 1; i <= ('A' + input); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}
