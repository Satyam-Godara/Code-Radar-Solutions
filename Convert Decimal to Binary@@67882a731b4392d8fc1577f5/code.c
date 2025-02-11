#include<stdio.h>  
int main(){
    int a[10],num,i,j;
    scanf("%d",&num);

    if(a==0){printf("0");}
    for(i=0;num>0;i++){a[i]=num%2; num=num/2;}
    for(i=i-1;i>=0;i--){printf("%d",a[i]);}
    return 0;
}

