#include<stdio.h>

int bubbleSort(int * arr ,int n){
    for(int j=0;j<(n-1);j++){
        for(int k=0;k<(n-j-1);k++){
            if(arr[k]>arr[k+1]){
                int temp =arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    
}

int main(){
    int n,arr[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    if(n%2==0){int h=arr[(n)/2]+arr[(n-2)/2];h=h/2;printf("%d",h);}
    else{printf("%d",arr[(n-1)/2]);}
}