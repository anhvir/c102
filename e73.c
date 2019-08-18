/*  Purpose: (Skeleton for) iplementing exercise 7.3
    Exercise 7.3:
    
  
    Steps in function main():
		1 - input an array of integers
        2 - print the inputted array
        3 - sort and remove duplicated elements [exercise 7.3]
        4 - print final sorted array 
   
	Started by: Anh Vo, anhvir@gmail.com
    Completed by:  

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000		/* maximal array size */ 

int read_array(int a[]); 
void print_array(char *title, int a[], int n);
int distinct_sort(int a[], int n);

int
main(int argc, char *argv[]) {
	int n=0;			/* current number of elements in array */
	int a[MAX_N];

	n= read_array(a);
	print_array("Original array", a, n);
	
	n= distinct_sort(a,n);
	print_array("Sorted array", a, n);

	return 0;
}

/* reads at most MAX_N elements for an array  
   returns the number of elements in the array
*/ 
int read_array(int a[]) {  
	int i;
	for (i=0; i<MAX_N && scanf("%d", &a[i])==1; i++); /* empty body */
	return i;
}


/* print out the array a[] after printing a title
*/  
void print_array(char *title, int a[], int n) {
	int i;
	printf("\n%s:\n", title);
	for (i=0; i<n; i++) printf ("%3d", a[i]);
	printf("\n\n");
}

void swap(int *a, int *b) {
	int t= *a;
	*a= *b;
	*b= t;
}

/* shift all elements in slice a[pos..n-1] one position to the left */
void shift_left(int a[], int n, int pos) {
	int i;
	for (i=pos; i<n; i++) a[i-1]= a[i];
}

/* sorting elements of a[] in increasing order
   using insertion sort
   and removing all duplicated element
   returns the number of distinct element, which is the new size of the array    
*/	
int distinct_sort(int a[], int n){
	int i, j;
	
	/* First, sorts the array using insertion sort */
	for (i=1; i<n; i++) { 
		for (j=i-1; j>=0 && a[j] > a[j+1]; j--) {
			swap( &a[j+1], &a[j] );
		}
	}

	/* Then, checks and removes duplicates */
	for (i=1; i<n; i++) {  // starts from the 2nd element, ie. a[1]
		if (a[i]==a[i-1]) {  // if a[i] is a duplicate
			/*  FIX ME: remove a[i] from the array 
			    by shifting the slide a[i.. n-1] 1 position to the left */
			/* FIX ME */ ;	 /* then, we probably need to change n? */
		}
	}
	return n; 
}

