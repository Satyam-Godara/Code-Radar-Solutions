// Your code here...
#include<stdio.h>

struct employee{
    int id;
    char name[10];
    int salary;
};

int main(){
    int n;
    scanf("%d",&n);
    struct employee arr[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %d",&arr[i].id,&arr[i].name,&arr[i].salary);
    }

    float bonus;
    for(int i=0;i<n;i++){
        if(arr[i].salary<50000){printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,(arr[i].salary)*0.1);}
        else{printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,(arr[i].salary)*0.05);}
    }
    
}