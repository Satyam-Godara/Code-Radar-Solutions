#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=-50;
    for(int i=0;i<a;i<a;i++){
        if(arr[i]>max){max=arr[i];}
    }
    int min=max;
    for(int i=0;i<a;i++){
        if(arr[i]<min){min=arr[i];}
    }
    int minn=min;
    for(int i=0;i<a;i++){
        if(arr[i]!= min && arr[i]<max){minn=arr[i];}
    }
    if(max!=-50){printf("%d",minn);}
    else{printf("-1");}
    return 0;

}