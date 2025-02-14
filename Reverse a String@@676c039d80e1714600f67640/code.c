#include<stdio.h>

int main(){
    char a[10];
    char b[10];

    scanf("%s",&a);
    int l=sizeof(a);
    for(int i=0;i<sizeof(a);i++){
        l--;
        b[i]=a[l];
    }
    printf("%s",b);
    return 0;
}