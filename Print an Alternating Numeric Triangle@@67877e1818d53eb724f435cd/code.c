#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);

    for (i=0;i<=a;i++){
        for(j=1;j<i;j++){((i+j)%2==0)?printf("0 "):printf("1 ");}

        printf("\n");
    }
    return 0;
}