#include<stdio.h>
int main(){
    int arr[20],n,b,c,d;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int isMonotonic(){
        int inc=1,dec=1;
        for(int j=0; j<n-1;j++){
            if(arr[j]>arr[j+1]){inc=0;}
            if(arr[j]<arr[j+1]){dec=0;}
        }
        return inc || dec;
    }

    (!(isMonotonic()))?printf("YES"):printf("NO");
    return 0;
}