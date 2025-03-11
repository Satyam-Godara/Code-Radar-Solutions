// Your code here...
# include<stdio.h>

int selectionSort(int * arr ,int n){
    for(int j=0;j<(n-1);j++){
        for(int k=0;k<(n-j-1);k++){
            if(arr[k]>arr[k+1]){
                int temp =arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    
}

int printArray(int * arr, int n){
    for(int x=0;x<n;x++){
        printf("%d ",arr[x]);
    }
    
}