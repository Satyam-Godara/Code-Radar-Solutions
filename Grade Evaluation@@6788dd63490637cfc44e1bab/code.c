#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    (a=='A')?printf("Excellent"):(a=='B')?printf("Good"):(a=="C")?printf("Average"):(a=="D")?printf("Below Average"):(a=="F")?printf("Fail"):printf("Invalid grade");
    return 0;
}