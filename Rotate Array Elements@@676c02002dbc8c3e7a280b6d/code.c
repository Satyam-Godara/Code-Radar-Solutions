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
    int z=0;
    for(int j=a-k;j>a;j++){arr1[z]=arr[j];z++;}
    for(int g=0;g<a-k;g++){arr[g+k]=arr[g];}

    for(int h=0;h<k;h++){arr[h]=arr1[h];}

    for(int l=0;l<a;l++){
        printf("%d\n",arr[l]);

    }
    return 0;
}