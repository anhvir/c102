#include <stdio.h>

// the task seems to be ok only when n is positive and is not too big.
//    we define MIN and MAX as min and max for n
#define MIN 1
#define MAX 20

int main(int argc, char *argv[]) {
	int n, i, j;

	printf("Enter value for n:");
	while ( scanf("%d", &n) == 1 ) {
		if (n>=MIN && n<=MAX) {
			break;
		}
		printf("Enter value between %d and %d:", MIN, MAX);
	}

	for (i=0; i<n; i++) { // print n lines
		int stars= i+1;   // number of stars, which is 1 when i=0
		int spaces= n-i;  // stars and spaces add up to n
		for (j=0; j<spaces; j++) {  
			printf("  ");
		}
		for (j=0; j<stars; j++) {
			printf(" *");
		}
		printf("\n");     // end line
	}
	return 0;
}
