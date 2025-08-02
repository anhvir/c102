/* Anh Vo, avo@unimelb.edu.au, for unimelb.COMP10002.Workshop.Week2 */

/* This program asks your name, greets you, and then
	asks you to guess a number from MIN to MAX,
	the program will terminate only after you give
	the right guess.
   I hope that with your Python's knowledge, you can understand
    this code. And I believe that after a couple of weeks you
    can reproduce this program and/or write similar programs yourselves.
    
    
   HOW-TO play with this program:
   1. In github, click "Raw" to have the plain text content. Then 
      Ctrl-A, Ctrl-C to copy. Last, paste it to grok's Playground 
      window (or to your editor/JEdit window)
   2. Run and try the program. If you use jEdit, you need to save
      the code, compile it before executing.  
   3. Explore and try to understand the code. If you want to dig
      more on rand(), srand(), or time() functions, why not give
      a question like "C rand()" to our friend Google?
   4. Make some small changes to the program and re-run it. Suggested
      changes included (but not limited to):
         + change MY_NAME from "Anh" to "your_name" 
         + change MAX to 20 or even 100, or something else
         + [challenging] the current code thinks the user uses binary
           search even when the user doesn't do so, and just has a  
           low number of guesses due to luck! Modify the code to
           address this problem.
*/

#include <stdio.h>    /* for printf(), scanf() and etc.     */
#include <stdlib.h>   /* for rand() and many popular things */	    
#include <time.h>     /* for time() and ...                 */
#include <math.h>     /* for log10() and all math functions */

#define MIN 1
#define MAX 50
#define MY_NAME "Anh"
#define MAX_NAME_LEN 50

int main(int argc, char *argv[]) {
	char name[MAX_NAME_LEN + 1];   /* this is a string variable  */		
	int secret,	                   /* my secret number           */
	    guess,		               /* your guess                 */
	    count= 0;                  /* number of guesses made     */
	
	/*-------- greeting ---------*/ 
	printf("Hi! My name's %s. \nWhat's your name? ", MY_NAME);
	scanf("%[^\n]", name);
	printf("\nGreat, %s! Very nice to work with you this semester!\n\n", name);
	
	printf("Now, let's play a game\n"
			"I have a secret number  between %d and %d inclusively,\n"
			"would you be able to guess that number just after a few trial?\n\n",
			MIN, MAX );

	/*-------- initializing ---------*/  
	srand(time(NULL));                   /* start using random, aka. seeding */
	secret= rand() % ((MAX - MIN)/2 + 1) + MIN+(MAX-MIN)/4; /* secret= random number from 
	                                        in the mid-half of (MIN..MAX)        
	                       rand() return a non-negative random integer, which 
	                       could be very big, that's why % is employed here  */
	count= 0;
	guess= MIN-1;                       /* guess= any value but "secret" */
	
	/*-------- looping to receive your guesses ---------*/ 
	while (guess != secret) {
		printf ("Make a guess = ");
		scanf("%d", &guess);
		count= count + 1;
		if (guess < secret) {
			printf("              too low :-)\n");
		} else if (guess > secret) {
			printf("              too high :-)\n");
		}
	}

	/*-------- printing some assessments & concluding ---------*/ 
	printf("\nRight, %s, my secret number is really %d! You did it with %d guesses.\n",
			 name, secret, count);
	int max_seq = MAX - MIN + 1,    /* max guesses if using sequential search */
	max_bin = ceil(log10(max_seq)/log10(2)); /*if using binary search     */
	                            /* see NOTE at the end of the program     */
	          
	if (count <= max_bin) + 1 {
		printf ("You did so well!\nI guessed that you used binary search.\n");
	} else if (count <= max_seq) {
		printf ("Not bad!\nBut you could try a better strategy.\n");
	} else {
		printf ("Something wrong here, why did you make sooooo many guesses?\n");
	}
	
	printf("\nHope that you enjoyed it.\n");
	printf("Remember to explore the code, there is a good chance that\n"
		   "you can understand it even after just 1 week of learning C.\n\n");
	
	return 0;
}

	    /* NOTE: There are 2 systematic strategies to play this game:
	      A- Sequential Search: you try one by one, from smallest (MIN) to
	         largest (MAX) or vice versa. In the worst case you will do
	         MAX-MIN+1 guesses. On average, you need (MAX-MIN+1)/2 guesses.
	      B- Binary Search: 
	          0. you know that the secret is in range low(=MIN)..high(=MAX)
	          1. you make a guess with the middle value (low+high)/2
	          2. if not successful, you use the suggestions ("too low" or
	             "too high" to modify the values of low or high,
	             then go back to step 1.
	         Each time you make a guess, you half the length of low..high,
	         so in the worst case, you need log2(high-low+1) guesses. And:
	           + Since <math.h> doesn't have function log2, I computed log2(x)
	             as log10(x)/log10(2) - don't hate math!
	           + function ceil(x) returns the smallest integer that >= x,
	             for example, ceil(2.1), ceil(2.9), ceil(3) all give 3.
	     -------------------------------------------------------------------- */

		
	
