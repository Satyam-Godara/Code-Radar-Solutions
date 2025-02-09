#include <stdio.h>

int main(){
    int a,i,j;

    scanf("%d",&a);

    for (i=0;i<a;i++){printf("*");}
    printf("\n");
    for (j=0;j<a;j++){
        (j==0 || j==(a-1))?printf("*"):printf(" ");
    }
    printf("\n");
    for (i=0;i<a;i++){printf("*");}
    return 0;
}