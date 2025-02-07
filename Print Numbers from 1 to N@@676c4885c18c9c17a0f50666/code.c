#include <stdio.h>

int main(){
    int a,isprime,i,j;
    scanf("%d",&a);
    for (i=2;i<=a;i++){
        isprime=1;
        for (j=2;j*j<=i;j++){
            if (i%j==0){isprime=0; break;}
        }
        if (isprime){printf("%d\n",i);}
    }
return 0;
}