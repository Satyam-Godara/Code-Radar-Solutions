#include<stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=0;--i){
        for(j=65;j<(65+i);++j){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}