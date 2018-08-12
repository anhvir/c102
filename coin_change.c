/* Anh Vo: skeleton for Ex 6.9 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_COINS 8
#define MIN_AMOUNT 1
#define MAX_AMOUNT 999


void print_change(int cents); 
int round_to_5(int cents); 
void try_a_coin (int *pcents, int coin); 

int main( int argc, char *argv[] ) {
   int amount;
   printf ("enter amount in cents:");
   while ( scanf("%d", &amount)==1 
           && amount >= MIN_AMOUNT 
           && amount <= MAX_AMOUNT ) {
      print_change(amount);
      /* and/or something else, read the Ex 6.9 for more requirements */ 
   }  	 


}

/* print out changes required for the amount "cents" of cents */
void print_change(int cents) {
   int coins[NUM_COINS]= {200, 100, 50, 20, 10, 5, 2, 1};
   int n= NUM_COINS;


}

/* returns a value rounded off to the nearest multiple of five */
int round_to_5(int cents) {
   return cents;
}

/* function to print change using coin valued “coin”
   and reduce the amount (*pcents) accordingly  */
void try_a_coin (int *pcents, int coin) {
   
}



