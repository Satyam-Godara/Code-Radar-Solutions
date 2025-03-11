#include<stdio.h>

int sum(int a){
    int n=0;
    if(a<0){a=a*-1;}
    while(a>0){
        n+=a%10;
        a=a/10;
    }
    return n;
}
int main(){
    int b;
    scanf("%d",&b);
    int arr[20];
    for(int i=0;i<b;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<b;i++){
        printf("%d ",sum(arr[i]));
    }
    return 0;
}