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
    int r;
    scanf("%d",&r);
    int result=1;
    for(int i=0;i<n;i++){
        if(arr[i].roll==r){result=1;break;}
        else{result=0;}
    }
    (result==1)?printf("Roll Number: %d, Name: %s, Marks: %.2f",arr[i].roll,arr[i].name,arr[i].marks):printf("Student not found");
    
}

