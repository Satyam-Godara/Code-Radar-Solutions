#include <stdio.h>

int main(){
    int a,i,j,k;

    scanf("%d",&a);

    for (i=0;i<a;i++){printf("*");}
    printf("\n");
    
    for (j=0;j<(a-2);j++){
        for(k=0;k<(a);k++){
        (k==0 || k==(a-1))?printf("*"):printf(" ");
        }
        printf("\n");
    }
    
    for (i=0;i<a;i++){printf("*");}
    return 0;
}