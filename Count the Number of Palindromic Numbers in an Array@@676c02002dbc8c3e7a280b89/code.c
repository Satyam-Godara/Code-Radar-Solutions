#include<stdio.h>


int isPalindrome(int num) {
    int original = num;
    int reversed = 0, remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        return 1;  // Palindrome
    } else {
        return 0;  // Not a palindrome
    }
}

int main(){
    int n;
    
    scanf("%d",&n);
    int arr[20];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(isPalindrome(arr[i])==1){count+=1;}
    }
    printf("%d",count);
    return 0;
}