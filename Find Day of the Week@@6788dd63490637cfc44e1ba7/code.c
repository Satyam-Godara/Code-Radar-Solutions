#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    char days[][]={"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
    (a>=1 && a<=7)?printf("%s",days[a-1]):printf("Invalid");
    return 0;
}