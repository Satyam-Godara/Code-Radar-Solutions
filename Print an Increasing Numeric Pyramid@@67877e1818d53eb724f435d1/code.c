#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);
    for (i=a-1;i>=0;i--){
        printf(" ");
        for (j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}