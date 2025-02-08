#include<stdio.h>
#include<math.h>
void main() {
    int a,b=0;
    int n,i;
    // printf("Enter a Decimal Number\n");
    scanf("%d",&n);
    for(i=0;i>0;i++) {
        a=n%2;
        n=n/2;
        b=b+(pow(10,i)*a);
    }
    printf("%d",b);
    return 0;
}