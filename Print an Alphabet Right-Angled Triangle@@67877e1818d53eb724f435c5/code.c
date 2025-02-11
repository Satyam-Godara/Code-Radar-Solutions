// #include <stdio.h>
// int main() {
//    int i, j,input;
//    char alphabet;
// //    printf("Enter an uppercase character you want to print in the last row: ");
//    scanf("%d", &input);
//    for (i = 1; i <=input; ++i) {
//     alphabet='A';
//       for (j = 1; j <= i; ++j) {
//          printf("%c ", alphabet);
      
//       ++alphabet;}
      
//       printf("\n");
//    }
//    return 0;
// }


#include<stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;++i){
        for(j=65;j<(i+65);++j){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}