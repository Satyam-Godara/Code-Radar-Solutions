#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    (a==2)?printf("28"):((a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)?printf("31"):(a<=12 && a>=1)?printf(30):printf("Invalid month"));
    
    return 0;
}