#include<stdio.h>

int main(){
    int a,b,i;
    scanf("%d",&a);
    b=0;
    for(i=0;i<32;i++){if((a<<i)&(1<<31)){b=i; break;}}

    printf("%d",b);
    return 0;
}