#include<stdio.h>

int main(){
    int arr[20],n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int inc=1;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){inc=0; break;}
    }
    (inc)?printf("Sorted"):printf("Not Sorted");
    return 0;
}