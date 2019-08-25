/*     
	Purpose : Implementing exercise 7.7 of the text book:
              Write a function that takes an array of ints as arguments.
	            and returns the k-th smallest value of the array.

	Author :
	Date   :
	Note   : the scaffolding supplied by Anh Vo, anhvir@gmail.com

*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_N 1000		/* maximal array size */ 

int read_array(int a[]); 
void print_array(char *title, int a[], int n);
int most_frequent(int k, int a[], int n);

int
main(int argc, char *argv[]) {
	int a[MAX_N];   // "a" is an array of upto MAX_N integers
	int n=0;		// "n" - current number of elements in array
	int k;

	n= read_array(a);
	print_array("Original array", a, n);

	if (argc>1) {
		k= atoi(argv[1]);
	} else {
		k= n/2;
		fprintf(stderr, "Note: use \n      %s k\n  to supply the value for k\n\n",
		          argv[0]); 
	}
	/*** Explanation on argc and argv:
		main() is a special function that receives its parameters
		  (ie, argc and argv) from the command line, for that:
		    - "argc" will be the number of word in the command
            - "argv" is the array of those words (and so,
		      it is an array of string, ie. of "char *")
		Example 1: if we run our program with
		    ./e78 
		    then argc is 1, and argv[0] is string "./e78"
		Example 2: if we run our program with
		    ./e78 12 
		    then argc is 2 (2 words), and argv[0] is string "./e78",
		         argv[1] is string "12"
		Note: in e78.c, function atoi("12") turns string "12"
		      into integer number 12
	***/


	printf("** Finding the k-smallest element of the above array**\n");
	printf("**           with k= %d                             **\n",k); 
		
	printf("The %d-th smallest is %d\n\n", k, most_frequent(k, a, n));

	return 0;
}


/* 	returns the k-th smallest value of the array 
            without modifying the array.
	Note: the value of k must be in between 0 and n-1 inclusively
	Hints: - Need to be careful in handling duplicates
           - Without relying on a sorted array, first try to figure
             out which condition(s) the answer must satisfies
*/	
int most_frequent(int k, int a[], int n){
	
	assert(k>=0 && k<n);
	/* FIXME ; implement this function */
	
	fprintf(stderr, "*** Function ksmallest not yet implemented ***\n");	
	fprintf(stderr, "**********************************************\n");	
	return -1;
}


/****  Array input & output ***************************************/
/* reads at most MAX_N elements for an array  
   returns the number of elements in the array
*/ 
int read_array(int a[]) {  
	int i;
	for (i=0; i<MAX_N && scanf("%d", &a[i])==1; i++); /* empty body */
	return i;
	/* Note that after the loop, "i" becomes the number of elements
       read into the array, and is the same as
	   the number of currently accessible in the array
	   (aka. the current number of elements)
	*/
}


/* prints out the array a[] after printing a title
   Here "title" is a pointer to char and
   is intepreted as a string
*/  
void print_array(char *title, int a[], int n) {
	int i;
	printf("\n%s:\n", title);
	for (i=0; i<n; i++) printf (" %3d", a[i]);
	printf("\n\n");
}

