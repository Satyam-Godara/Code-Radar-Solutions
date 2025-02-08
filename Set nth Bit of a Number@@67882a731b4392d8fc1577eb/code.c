/**
 * C program to set the nth bit of a number
 */

#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d %d",&num,&n);


    /* Left shift 1, n times and perform bitwise OR with num */
    newNum = (1 << n) | num;

    // printf("Bit set successfully.\n\n");
    // printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("%d",newNum);

    return 0;
}