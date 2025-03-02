#include<stdio.h>

int main(){
    int arr[20],n,max=-10,count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        if(arr[j]%2==0){count+=1;if(arr[j]>max){max=arr[j];}}
    }
    (count==0)?printf("-1"):printf("%d",max);
    return 0;
}