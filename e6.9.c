/* Anh Vo: skeleton for Ex 6.9 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_COINS 6       /* we have 6 different coins      */
#define MIN_AMOUNT 1      /* the minimal amount of cents    */ 
#define MAX_AMOUNT 999    /* the maximal amount of cents    */


void print_change(int cents); 
int round_to_5(int cents); 
void try_a_coin (int *pcents, int coin); 

/* the main() is fully written for you, but there is a question:
   - How can we intergrate the "if" in lines 21-23 into the loop's guard?
*/ 
int main( int argc, char *argv[] ) {
	int amount;
	printf ("Enter amount in cents: ");
	while ( scanf("%d", &amount)==1 ) {
		if ( !(amount >= MIN_AMOUNT && amount <= MAX_AMOUNT) ) {
			break;
		}
		printf("\nThe amount is %d\n", amount);
		printf("The change is :\n");   
		print_change(amount);
	}  	 
}

/* returns a value rounded off to the nearest multiple of five */
/* NOT YET DONE - FIX ME! */ 
int round_to_5(int cents) {
	return cents;
}

/* function to print change using coin valued “coin”
   and reduce the amount (*pcents) accordingly  */
/* NOT YET DONE - FIX ME! */ 
void try_a_coin (int *pcents, int coin) {
	/* say, if *pcents=45 and coin=20 we need:
		- print out: 20c, 20c,       
		- reduce *pcents to 5 
	*/
  
}


/* print out changes required for the amount "cents" of cents */
/* NOT YET DONE - FIX ME! */ 
void print_change(int cents) {
	int n= NUM_COINS;
	


}


