#include<stdio.h>

int main(){
    int a;
    int arr[20];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a;j++){
        int count=0;
        for(int k=0;k<a;k++){
            if(arr[k]==arr[j]){count+=1;}
        }
        if(count>1){printf("%d",arr[j]);break;}
    }
}