#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min_sum=arr[0];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[i]-arr[j]<min_sum){min_sum=arr[i]-arr[j];}
        }
    }
    if(a==1){printf("-1");}
    else{printf("%d",min_sum);}
    return 0;
}