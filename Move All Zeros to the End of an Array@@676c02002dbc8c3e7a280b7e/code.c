#include<stdio.h>

int main(){
    int a,arr[20];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }    
    for(int i=0;i<a;i++){
        if(arr[i]==0){
            for(int j=i;j<a;j++){
                arr[j]=arr[j+1];
                // arr[a-1]=0;
            }
        }
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}