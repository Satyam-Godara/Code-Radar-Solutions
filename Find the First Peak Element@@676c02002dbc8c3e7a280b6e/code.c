#include<stdio.h>

int main(){
    int r=-1;
    int n, arr[20];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n-1;j++){
        if(arr[j]!=arr[j+1]){
        if(arr[j+1]<arr[j]){r=arr[j];break;}
        else{r=arr[n-1];break;}}
        else{printf("-1"); break;}
    }
    printf("%d",r);
    return 0;
}