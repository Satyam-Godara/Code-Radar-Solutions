#include<stdio.h>

int main(){
    int count =0,n,k,arr[20];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>k){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}