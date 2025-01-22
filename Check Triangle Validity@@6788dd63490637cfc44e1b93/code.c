#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a+b > c && b+c > a && a+c > b)?printf("Valid"):printf("Invalid");
    return 0;
}