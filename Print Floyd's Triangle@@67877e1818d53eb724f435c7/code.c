#include <stdio.h>
int main(){
    int a,i,j;
    int num=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;++j){
            printf("%d ",num);
            ++num;
        }
        printf("\n");
    }
    return 0;
}