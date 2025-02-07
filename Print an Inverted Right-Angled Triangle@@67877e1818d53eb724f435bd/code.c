#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);
    for (i=0;i<=a;i++){
        for (j=i;j>0;j--){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}