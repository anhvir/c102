/*     
	Purpose : Implementing exercise 7.9 of the text book:
              Write a function that takes an array of ints as arguments.
	            and returns the number of ascending runs in the array.
	            For example {2, 5, 10, 7, 3, 100, 200} has 3 runs:
	               {2, 5, 10}, {7}, and {3, 100, 200}

	Author :
	Date   :
	Note   : the scaffolding supplied by Anh Vo, anhvir@gmail.com

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000		/* maximal array size */ 

int read_array(int a[]); 
void print_array(char *title, int a[], int n);
int asc_runs(int a[], int n);

int
main(int argc, char *argv[]) {
	int a[MAX_N];   // "a" is an array of upto MAX_N integers
	int n=0;		// "n" - current number of elements in array

	n= read_array(a);
	print_array("Original array", a, n);
	
	printf("The number of runs in the array is %d\n\n", asc_runs(a, n));

	return 0;
}

/*	returns the number of ascending runs in the array.
	For example {2, 5, 10, 7, 3, 100, 200} has 3 runs:
	      {2, 5, 10}, {7}, and {3, 100, 200}
*/	
int asc_runs(int a[], int n){
	/* FIXME ; implement this function */
	
	fprintf(stderr, "*** Function asc_run not yet implemented ***\n");	
	fprintf(stderr, "********************************************\n");	
	return 0;
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

