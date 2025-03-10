#include<stdio.h>

int main(){
    int a;
    int arr[20];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int m=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            while(i!=j){
            if(arr[i]*arr[j] >m){m= arr[i]*arr[j];}}
        }
    }
    printf("%d",m);
    return 0;
}