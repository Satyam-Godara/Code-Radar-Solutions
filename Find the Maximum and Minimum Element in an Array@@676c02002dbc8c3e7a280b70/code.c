#include<stdio.h>
int main(){
    int a;
    int arr[20];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min=0;
    int max=0;
    for(int j=0;j<a;j++){if(arr[j] > max){max = arr[j];}}
    for(j=0;j<a;j++){if(arr[j] < min){min = arr[j];}}

    printf("%d %d",min,max);
    return 0;
}