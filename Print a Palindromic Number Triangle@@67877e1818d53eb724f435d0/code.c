#include<stdio.h>

int main(){
    int a,i,j,k,z;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j>0;j--){printf(" ");}
        for(k=1;k<i;k++){printf("%d",j);}
        for(z=i;z>=1;z--){printf("%d",z);}
        printf("\n");
    }
    return 0;
}