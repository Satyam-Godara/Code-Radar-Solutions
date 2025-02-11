#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);

    for (i=1;i<=a;++i){
        for(j=1;j<=i;++j){((i+j)%2==0)?printf("1 "):printf("0 ");}

        printf("\n");
    }
    return 0;
}