#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[20];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=-5;
    for(int j=0;j<a;j++){if(arr[j] > max){max = arr[j];}}
    int min=max;
    for(int j=0;j<a;j++){if(arr[j] < min){min = arr[j];}}

    printf("%d %d",min,max);
    return 0;
}