// Your code here...// Your code here...
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
    int result=1;
    for(int i=0;i<n;i++){
        if(arr[i].marks<50){result=0;break;}
    }
    (result==0)?printf("Not All Passed"):printf("All Passed");
}