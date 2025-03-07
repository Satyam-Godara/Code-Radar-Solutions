#include<stdio.h>

int findOccurrence(int *arr, int n, int target, char mode ){

    int a=-1;
    if(mode='F'){
    for(int i=0;i<n;i++){
        if(arr[i]==target){a=i;break;}
    }}
    else if(mode='L'){
        for(int j=n-1;j>=0;j--){
            if(arr[j]==target){a=n-j;break;}
        }
    }
    return a;
}