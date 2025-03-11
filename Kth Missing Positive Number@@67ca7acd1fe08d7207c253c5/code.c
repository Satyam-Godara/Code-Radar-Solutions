#include<stdio.h>

int findKthMissing(int *arr, int n, int k){
    int count=0,z=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=z){count+=1;}
        if(count==k){break;}
    }
    return z;
}