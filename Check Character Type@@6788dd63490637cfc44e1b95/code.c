#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a>=48 && a<=57){printf("Digit");}
    else if(a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u' || a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){printf("Vowel");}
    else if(a>=97 && a<=122){printf("Consonant");}
    else {printf("Special Character");}
    return 0;

}