// #include <stdio.h>

// int main(){
//     int a,i,j,k;
//     scanf("%d",&a);

//     for (i=1;i<=a;i++){
//         for (j=a;j>i;j--){printf(" ");}
//         for (k=1;k<=i;k++){printf("*");}
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int a,i,j,k;
    scanf("%d",&a);

    for (i=1;i<=a;i++){
        for(j=a;j>i;j--){printf(" ");}
        for(k=1;k<=i;k++){printf("*");}
        printf("\n");
    }
    return 0;
}