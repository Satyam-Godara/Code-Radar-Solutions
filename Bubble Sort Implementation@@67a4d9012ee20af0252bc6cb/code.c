// Your code here...
# include<stdio.h>

int bubbleSort(char arr ,int a){
    for(int j=0;j<(a-1);j++){
        for(int k=0;k<(a-j-1);k++){
            if(arr[k]>arr[k+1]){
                int temp =arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
}

int printArray(char arr, int a){
    for(int x=0;x<a;a++){
        printf("%d ",arr[x]);
    }
}