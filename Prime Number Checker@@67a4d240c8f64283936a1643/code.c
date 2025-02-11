#include <stdio.h>

int isPrime(int x) {
    if(x<=1){return 0;}
    int i;
    for (i=2;i*i<=x; i++) {
        if (x%i==0) {
        return 0;
        }
    }
    return 1;
}