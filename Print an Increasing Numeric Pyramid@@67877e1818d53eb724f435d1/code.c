#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);

    for (i=0;i<=a;i++){
        for (k=a;k>=0;k--){printf(" ");}
        for (j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}