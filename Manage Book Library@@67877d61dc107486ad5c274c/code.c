// Your code here...
#include<stdio.h>

struct book{
    char title[10];
    char author[10];
    float price;
};

int main(){
    int n;
    scanf("%d",&n);
    struct book arr[n];

    for(int i=0;i<n;i++){
        scanf("%s %s %f",&arr[i].title,&arr[i].author,&arr[i].price);
    }
    float tsh;
    scanf("%f",&tsh);
    printf("Books above price %.2f:",tsh);
    for(int i=0;i<n;i++){
        if(arr[i].price>tsh){printf("Title: %s, Author: %s, Price: %.2f",arr[i].title,arr[i].author,arr[i].price);}
    }
    
}