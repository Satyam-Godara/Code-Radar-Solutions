#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    char b[10];

    scanf("%s",&a);
    int l= strlen(a);
    for(int i=0;i<=l;i++){
        b[i]=a[l];
        l--;
    }
    printf("%s",b);
    return 0;
}