#include<stdio.h>

int main(){
    int prime,n,arr[20],count=0;

    int isPrime(int x){
        int p=1;
        if(x==1 || x==2){return 1;}
        for(int z=2;z*z<=x;z++){
            if(x%z==0){p=0;}
        }
        return p;
    }

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        if(isPrime(arr[j])){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}