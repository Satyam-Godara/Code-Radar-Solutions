#include<stdio.h>

int main(){
    int a,arr[20];
    int arr2[20];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);   
    }
    int z=0;
    for(int j=a-1;j>=0;j++){
        arr2[z]=arr[j];
        z+=1;
    }
    int r=1;
    for(int g=0;g<a;g++){
        if(arr[g]!=arr2[g]){r=0;break;}
        else{r=1;}
    }
    (r==1)?printf("YES"):printf("NO");
    return 0;
}