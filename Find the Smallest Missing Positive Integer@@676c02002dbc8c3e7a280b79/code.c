#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]<min && arr[i]>=0,){min=arr[i];}
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[j]==min+1)
        }
    }
}