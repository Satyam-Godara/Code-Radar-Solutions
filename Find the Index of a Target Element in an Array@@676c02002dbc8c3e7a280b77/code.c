#include<stdio.h>

int main(){
    int n,arr[20],index,k;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int j=0;j<n;j++){
        if(arr[j]==k){
            index=j;
            break;
        }
        else{index=-1;}
    }
    printf("%d",index);
    return 0;
}