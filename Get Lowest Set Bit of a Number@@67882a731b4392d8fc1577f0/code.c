// /**
//  * C program to get lowest order set bit in a number
//  */

// #include <stdio.h>
// #define INT_SIZE sizeof(int) * 8 /* Integer size in bits */

// int main()
// {
//     int num, order, i;

//     /* Input number from user */
//     // printf("Enter any number: ");
//     scanf("%d", &num);

//     /* Initially set the order to max size of integer */
//     order = INT_SIZE - 1;

//     /* Iterate through each bit of integer */
//     for(i=0; i<INT_SIZE; i++)
//     {
//         /* If current bit is set */
//         if((num>>i) & 1)
//         {
//             order = i;

//             /* Terminate the loop */
//             break;
//         }
//     }

//     printf("%d",order);

//     return 0;
// }



#include<stdio.h>

int main(){
    int num,position,i;

    scanf("%d",&num);
    position=31;
    for (i=0;i<32;i++){if(num & i){position=i; break;}}
    printf("%d",position);
    return 0;
}