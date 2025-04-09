// Your code here...
#include<stdio.h>

struct week{
    
    char day[10];
    int temp;
};

int main(){
    struct week arr[7];

    for(int i=0;i<7;i++){
        scanf("%s %d",&arr[i].day,&arr[i].temp);
    }
    float total=0;
    for(int i=0;i<7;i++){
        total+=arr[i].temp;
    }
    float avg=total/7;
    printf("Average Temperature: %.2f",avg);
    
}