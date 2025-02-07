#include <stdio.h>

int main(){
    int a,prime;
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        prime=1;
        for (j=2;j*j<=i;j++){
            if(i%j==0){
                prime=0; 
                break;
            }
        }
        
    }
    (prime==1)?printf("Prime"):printf("Not Prime");
    return 0;
}