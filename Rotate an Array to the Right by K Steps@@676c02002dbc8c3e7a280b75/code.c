
#include<stdio.h>

int main(){
    int arr[20];
    int arr1[20];
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    // for(int l=0;l<a;l++){
    //     printf("%d  ",arr[l]);}

    int k;
    scanf("%d",&k);
    if(k>a){k=k-a;}

    for(int j=0;j<k;j++){arr1[j]= arr[j+(a-k)];}
    //     printf("\nList1\n");
    // for(int l=0;l<a;l++){
    //     printf("%d  ",arr[l]);}
    // printf("\nlist arr1\n");
    //     for(int l=0;l<a;l++){
    //         printf("%d  ",arr1[l]);}
    

    // printf("\n");


    for(int g=a-1;g>=a-k-2;g--){arr[g]=arr[g-k];}

    // printf("\nList1\n");
    // for(int l=0;l<a;l++){
    //     printf("%d  ",arr[l]);}
    //     printf("\n");

    for(int h=0;h<k;h++){arr[h]=arr1[h];}

    for(int l=0;l<a;l++){
        printf("%d ",arr[l]);

    }
    return 0;
}