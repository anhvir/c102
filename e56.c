/* This is an implementation for Exercise 5.6   
   By :
   Date (last updated) : /AUG/2019
*/

#include <stdio.h>
#include <stdlib.h>



#include <stdio.h>

#define TRUE 1
#define FALSE 0


int is_amicable(int, int);
 

int main(int argc, char *argv[]) {
	int m, n;   
   
	/* (1) do "standard" exercise 5.6   
       ie. cheacking if two numbers are an amicable pair  ------  */

	printf("Checking if 2 numbers form an amicable pair.\n");
	
	printf("Enter pairs of distinct natural numbers: ");
	while ( scanf("%d%d", &m,&n)==2 && m>1 && n>1 && m!=n) {
		printf("%d and %d ", m, n);
		if (is_amicable(m,n)) {
			printf("are an amicable pair!\n");
		}else {
			printf("are NOT an amicable pair.\n");
		}
	}       


	/* (2) do "challenge part" of exercise 5.6
	       ie find and print amicable pairs   -----------------   */             
    fprintf(stderr,"\n*** NOTE ***\n");  
	fprintf(stderr, "*** The chalenged part of Ex 5.6 not yet done\n\n");
	/* FIXME: add your code here for the challanging part */


	return 0;            
}

/* returns TRUE if (a,b) is an amicable pair, FALSE otherwise */
int is_amicable(int a, int b) {
	/* FIXME: implement your function here */

	fprintf(stderr, "*** Function is_amicable() not yet implemented\n\n");
	return FALSE;
}


/*************************************************/
/*              Programing is fun!               */
/*************************************************/

