// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

// Function to set Kth bit
int number( int n, int k){
	
	int x = (int)pow(2,k-1);
	// Checking the Kth bit is set or not
	if(n & x) return n;
	else{
		return n + x;
	}
}
// Driver code
int main() {
	
	int result = number(5, 2);
	printf("%d",result);
	
	return 0;
}
