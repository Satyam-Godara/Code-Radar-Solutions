#include<stdio.h>

int main(){
    int arr[20],n,max=0,count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        if(j%2==0){count+=1;if(j>max){max=j;}}
    }
    (count==0)?printf("-1"):printf("%d",max);
    return 0;
}