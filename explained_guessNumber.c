/* Anh Vo, anhvir@gmail.com, for unimelb.COMP20005.Workshop.Week2 */

/* This program asks your name, greets you, and then
	asks you to guess a number from 0 to 4,
	the program will terminate only after you give
	the right guess
*/

#include <stdio.h>		/* this should be in all of your C files! 		*/
#include <stdlib.h>		/* this should be in most of your C files 		*/
#include <time.h>		/* this: for using time(NULL) in line 40  		*/

#define MAX 10			/* MAX is a constant with value 10,
						   which is a number                            */
#define MY_NAME "Anh"	/* MY_NAME is a constant valued "Anh", 
          				   which is a string of 3 characters            */	
#define MAX_NAME_LEN 50

int main(int argc, char *argv[]) {
	int answer,			/* "answer" is a variable that can hold only
								integer value, at this moment it has an
								undefined value 						*/
		guess,			/* "guess" is smimilar to "answer"   			*/
		count= 0;		/* "count" is also an interger variable,
		 					but it has an initial value of zero	    	*/
		 				/* Note: lines 20-24 can be rewritten as:
		 					int answer, guess, count=0;, or
		 					int answer, guess; int count= 0;  */
									
	char name[MAX_NAME_LEN+1];	
						/* "name" is a string variable, it can hold
							any string (string= sequence of characters)
							of up to 51-1= 50 chracters					*/
	
	printf("Hi! My name's %s. \nWhat's your name? ", MY_NAME);
	scanf("%s", name);	/* Note: for string (and only for string),
							 we should not use "&name" in scanf			*/
	printf("\nGreat, %s! Very nice to meet you!\n\n", name);
	
	srand(time(NULL)); 	/* for now, don't worry about ths line 
	                       or perhaps ask our friend Google             */
	answer= rand() % MAX; /* rand() will give us a random integer number
							   (which could be very big),
							   and "% MAX" cuts that number down to 
							   the range from 0 to 9 (why?)   			*/	  
	
	printf("Now, let's start a game\n"
			"I have a secret integer number between 0 and %d inclusively,\n"
			"you have to guess that number.\n"
			"The game will end after you give a correct guess!\n\n",
			MAX-1 );
									
							
	guess = -1;    		/* a fake value for guess, just to make sure      
	                    	that "guess" differs from "answer"          */
	                           
	while (guess != answer) {	/* the next 3 statements will be repeated
								whenever "guess" differs from "answer"	*/
		printf ("Make a guess = ");
		scanf("%d", &guess);
		count= count + 1;
	}
	
	printf("\nYou've got the right answer after %d guesses.\n", count);
	if (count <= MAX/2) {
		printf ("You were so smart!\n");
	} else if (count < MAX) {
		printf ("You did well!\n");
	} else {
		printf ("Not bad!\n");
	}
	
	printf("\nHope that you enjoyed it. See you!\n\n");
	
	return 0;
}

		
	
