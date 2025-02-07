#include <stdio.h>

int main(){
    int a,i,j;
    char s='*';
    scanf("%d",&a);
    for (i=a;i>=1;i--){
        printf("%c ",i*s);
    }
}