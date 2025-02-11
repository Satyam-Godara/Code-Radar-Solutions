#include <stdio.h>

int main(){
    char arr[10];
    int num;
    int e=0,o=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<sizeof(arr);j++){
        if(a[j]%2==0){e+=1;}
        else{o+=1;}

    }
    printf("%d %d",e,o);
    return 0;

}