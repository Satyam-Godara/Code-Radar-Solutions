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
  
    float tsh;
    scanf("%f",&tsh);

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i].marks>tsh){count+=1;}
    }

    printf("Count of students scoring above %.2f: %d",tsh,count);
}

