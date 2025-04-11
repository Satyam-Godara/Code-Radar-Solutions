// Your code here...
#include<stdio.h>

struct Vehicle{
    char number[20];
    char type[10];
    int toll;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Vehicle  arr[n];
    float arr1[3]={0.0,0.0,0.0};

    for(int i=0;i<n;i++){
        scanf("%s %s %d",&arr[i].number,&arr[i].type,&arr[i].toll);
    }

    for(int i=0;i<n;i++){
        if(arr[i].type=="Car"){arr1[0]=arr[0]+arr[i].toll;}
        else if(arr[i].type=="Truck"){arr1[1]=arr[1]+arr[i].toll;}
        else if(arr[i].type=="Bike"){arr1[2]=arr1[2]+arr[i].toll;}
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",arr1[0],arr1[1],arr1[2]);
}