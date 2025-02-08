/**
 * C program to toggle nth bit of a number
 */

#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    // printf("Enter any number: ");
    scanf("%d %d", &num,&n);


    /*
     * Left shifts 1, n times
     * then perform bitwise XOR with num
     */
    newNum = num ^ (1 << n);

    // printf("Bit toggled successfully.\n\n");
    // printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("%d",newNum);

    return 0;
}