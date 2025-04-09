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
    int num;
    for(int i=0;i<n;i++){
        if(arr[i].roll==r){num=i;result=1;break;}
        else{result=0;}
    }
    (result==1)?printf("Roll Number: %d, Name: %s, Marks: %.2f",arr[num].roll,arr[num].name,arr[num].marks):printf("Student not found");

}

