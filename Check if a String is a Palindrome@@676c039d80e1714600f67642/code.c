// Your code here...

#include<stdio.h>
#include<string.h>

int main(){
    char a[20];
    char b[20];
    scanf("%s",&a);
    int l=strlen(a);
    for(int i=0;i<=strlen(a);i++){
        l--;
        b[i]=a[l];
    }
    int g;
    for(j==0;j<=strlen(a);j++){
        if(a[j]==b[j]){g=1;}
        else{g=0;break;}
    }
    (g==0)?printf("No"):printf("Yes");
    return 0;
}