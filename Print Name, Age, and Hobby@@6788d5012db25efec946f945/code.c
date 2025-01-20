#include <stdio.h>

int main(){
    char name[10];
    char hobby[10];
    int age;
    scanf("%s %d",name,&age);
    scanf("%s",hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;

}