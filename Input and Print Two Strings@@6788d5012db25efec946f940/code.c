#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a,b;
    scanf("%s %s",&a,&b);
    printf("%s %s",a,b);
    return 0;
}