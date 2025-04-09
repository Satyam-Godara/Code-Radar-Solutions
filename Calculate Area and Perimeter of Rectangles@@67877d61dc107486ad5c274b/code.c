// Your code here...
#include<stdio.h>

struct rectangle{
    int length;
    int breadth;
};

int main(){
    int n;
    scanf("%d",&n);
    struct rectangle arr[n];

    for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i].length,&arr[i].breadth);
    }
    
    for(int i=0;i<n;i++){
        float Area= arr[i].length * arr[i].breadth;
        float Perimeter= (arr[i].length+arr[i].breadth)*2;
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,Area,Perimeter);
    }
}