#include <stdio.h>

int main(){
    char arr[10];
    int num;
    int e=0;
    int o=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<sizeof(arr);j++){
        if(arr[j]%2==0){e+=1;}
        else{o+=1;}

    }
    printf("%d %d",e,o);
    return 0;

}