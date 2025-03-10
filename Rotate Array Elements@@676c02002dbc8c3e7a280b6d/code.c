
#include<stdio.h>

int main(){
    int arr[20];
    int arr1[20];
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);


    for(int j=0;j<k;j++){arr1[j]= arr[j+(a-k)];}

    for(int g=a-1;g>a-k-2;g--){arr[g]=arr[g-k];}

    for(int h=0;h<k;h++){arr[h]=arr1[h];}

    for(int l=0;l<a;l++){
        printf("%d\n",arr[l]);

    }
    return 0;
}