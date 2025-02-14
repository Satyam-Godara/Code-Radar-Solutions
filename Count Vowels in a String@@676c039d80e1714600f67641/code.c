// Your code here...

#include<stdio.h>
#include<string.h>

int main(){
    int count=0;
    char a[10];
    scanf("%s",&a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}