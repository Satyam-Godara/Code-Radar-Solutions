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
  
    float total=0;
    for(int i=0;i<n;i++){
        total+=arr[i].marks;
    }
    float avg=total/n;
    printf("Average Marks: %.2f",avg);
}

