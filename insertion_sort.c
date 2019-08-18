/*    
	Purpose : - input an array of integers
              - print the inputted array
              - sort the array in increasing order
                & demonstrates how insertion sort works
              - output the sorted array 
   
	Started by: Anh Vo, anhvir@gmail.com

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000		/* maximal array size */ 

int read_array(int a[]); 
void print_array(char *title, int a[], int n);
void ins_sort(int a[], int n);

int
main(int argc, char *argv[]) {
	int a[MAX_N];   // "a" is an array of upto MAX_N integers
	int n=0;		// "n" - current number of elements in array

	n= read_array(a);
	print_array("Original array", a, n);
	
	ins_sort(a,n);
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
	/* Note that after the loop, "i" becomes the number of elements
       read into the array, and is the same as
	   the number of currently accessible in the array
	   (the current number of elements)
	*/
}


/* prints out the array a[] after printing a title
   Here "title" is a pointer to char and
   is intepreted as a string
*/  
void print_array(char *title, int a[], int n) {
	int i;
	printf("\n%s:\n", title);
	for (i=0; i<n; i++) printf ("%3d", a[i]);
	printf("\n\n");
}

/*  swaps the values pointed to by pa and pb,
    for example, the call swap(&a, &b) will
	swap the value of a and b
*/
void swap(int *pa, int *pb) {
	int t= *pa;
	*pa= *pb;
	*pb= t;
}

/* sorting elements of a[] in increasing order
   using insertion sort    
*/	
void ins_sort(int a[], int n){
	int i, j;
	for (i=1; i<n; i++) { 
		/* Position "i" divides the array into 2 parts
		   the LHS a[0..i-1] and the RHS a[i..n-1]
		   Elements in the LHS are in sorted order
		   Elements in the RHS haven't been examined 
		   And now a[i] is being examined */ 

		 /* insert a[i] to LHS a[0..i-1] 
		    so that the extended LHS a[0..i] is sorted */
		for (j=i-1; j>=0 && a[j] > a[j+1]; j--) {
			swap( &a[j+1], &a[j] );
		}

		/* the next 5 lines is just for printing interim results, 
	       they are not parts of the sorting algorithm */
		printf ("After i=%2d: ",i);
		for (j=0; j<=i; j++) printf(" %2d", a[j]);
		printf("  ||  ");
		for (   ; j<n; j++) printf(" %2d", a[j]);
		printf("\n");

	}
}
