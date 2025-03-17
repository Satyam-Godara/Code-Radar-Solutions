#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=-50;
    for(int i=0;i<a;i++){
        if(arr[i]>max){max=arr[i];}
    }
    int maxx=-50;
    for(int i=0;i<a;i++){
        if(arr[i] != max && arr[i]>maxx){maxx=arr[i];}
    }
    printf("%d",maxx);
    return 0;
}