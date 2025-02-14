// Your code here...

#include<stdio.h>
#include<string.h>

int main(){
    char a[10], b[10];
    scanf("%s",&a);
    int l=strlen(a);
    for(int i=0;i<strlen(a);i++){
        l--;
        b[i]=a[l];
    }
    if(a==b){printf("Yes");}
    else{printf("No");}
    return 0;
}