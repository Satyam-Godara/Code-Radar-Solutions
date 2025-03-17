#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<a;i++){
        if(arr[i]>max){max=arr[i];}
    }
    int min=max;
    for(int i=0;i<a;i++){
        if(arr[i]<min){min=arr[i];}
    }
    int maxx=min;
    for(int i=0;i<a;i++){
        if(arr[i] != min && arr[i]<max){min=arr[i];}
    }
    if(maxx!=0){printf("%d",maxx);}
    else{printf("-1");}
    return 0;
}