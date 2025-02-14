#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    char b[100];

    scanf("%s",&a);
    int l= strlen(a);
    for(int i=0;i<=l;i++){
        b[i]=a[l-1];
        l--;
    }
    printf("%s",b);
    return 0;
}