#include<stdio.h>
#include<string.h>

int main(){
    char a[20];
    char b[20];

    scanf("%s",&a);
    int l= strlen(a);
    for(int i=0;i<=strlen(a);i++){
        l--;
        b[i]=a[l+1];
        
    }
    printf("%s",b);
    return 0;
}