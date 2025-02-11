#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(int(a)>=48 && int(a)<=57){printf("Digit");}
    else if(a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u'){printf("Vowel");}
    else if(int(a)>=97 && int(a)<=122){printf("Consonant");}
    else {printf("Special Character");}
    return 0;
}