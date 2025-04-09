// Your code here...
#include<stdio.h>

struct students{
    int roll;
    char name[10];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);
    struct students arr[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&arr[i].roll,&arr[i].name,&arr[i].marks);
    }
    int max=0;
    for(int i=0;i<n-1;i++){
        if(arr[i].marks>arr[i+1].marks){max=i+1;}
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",arr[max].roll,arr[max].name,arr[max].marks);


    // for(int i=0;i<n;i++){
    //     printf("Roll Number: %d, Name: %s, Marks: %.2f\n",arr[i].roll,arr[i].name,arr[i].marks);
    // }
}