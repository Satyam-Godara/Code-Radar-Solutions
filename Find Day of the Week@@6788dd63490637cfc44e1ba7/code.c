#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    char days[8]={"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday","\0"}
    printf("%s",days[a]);
    return 0;
}