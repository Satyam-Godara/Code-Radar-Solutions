// /**
//  * C program to clear the nth bit of a number
//  */

// #include <stdio.h>

// int main()
// {
//     int num, n, newNum;

//     /* Input number from user */
//     // printf("Enter any number: ");
//     scanf("%d %d", &num, &n);

//     /* Input bit number you want to clear */
//     // printf("Enter nth bit to clear (0-31): ");
//     // scanf("%d", &n);

//     /*
//      * Left shifts 1 to n times
//      * Perform complement of above
//      * finally perform bitwise AND with num and result of above
//      */
//     newNum = num & (~(1 << n));

//     // printf("Bit cleared successfully.\n\n");
//     // printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
//     printf("%d",newNum);

//     return 0;
// }


#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    new= a & (~(1<<b));
    printf("%d",new);
    return 0;
}