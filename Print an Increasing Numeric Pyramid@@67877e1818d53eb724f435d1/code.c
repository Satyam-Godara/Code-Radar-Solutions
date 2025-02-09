#include <stdio.h>

int main(){
    int a,i,j,k;
    scanf("%d",&a);
    int b=(a-1);
    for (i=0;i<=a;i++){
        for (k=a;k>i;k--){printf(" ");}
        for (j=1;j<=i;j++){
            printf("%d ",j);
        }
        // printf("\n");
    }
    return 0;
}