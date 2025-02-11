#include<stdio.h>  
int main(){
    int a[10],num,i,j;
    scanf("%d",&num);

    if(a==0){printf("0");}
    for(i=0;num>0;i++){a[i]=num%2; num=num/2;}
    for(j=0;j<num;j++){printf("%d",a[j]);}
    return 0;
}
