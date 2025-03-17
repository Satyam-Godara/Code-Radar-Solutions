// Your code here...a#include<stdio.h>

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
    int maxx=max;
    for(int i=0;i<a;i++){
        if(arr[i] != max && arr[i]<maxx){maxx=arr[i];}
    }
    if(maxx!=-50){printf("%d",maxx);}
    else{printf("-1");}
    return 0;
}