// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0;
// //    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) {
//       for (space = 1; space <= rows - i; ++space) {
//          printf(" ");
//       }
//       while (k != 2 * i - 1) {
//          printf("*");
//          ++k;
//       }
//       printf("\n");
//    }
//    return 0;
// }


#include<stdio.h>

int main(){
   int a,i,j,k;
   scanf("%d",&a);
   for(i=1;i<=a;i++){
      for(j=a;j>i;j--){printf(" ");}
      for(k=1;k<=a;k+=2){printf("*");}
      printf("\n");
   }
   return 0;
}