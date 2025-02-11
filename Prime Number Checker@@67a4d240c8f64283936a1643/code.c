#include <stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int num;
//         scanf("%d",&num);
//         printf("%d\n",num);
//     }
//     return 0;
// }

int isPrime(int x){
    int x,i,j;
    for(i=2;i*i<=x;j++){
        if(x%i==0){
            return 0;
        }
        else{return 1;}
        }
    
}