// Your code here...

#include<stdio.h>

int main(){
    int count=0;
    char a[10];
    scanf("%s",&a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}