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
	int n=0;			/* current number of elements in array */
	int a[MAX_N];

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

/* sorting elements of a[] in increasing order
   using insertion sort    
*/	
void ins_sort(int a[], int n){
	int i, j;
	for (i=1; i<n; i++) { 
		 /* insert a[i] to a[0..i-1] */
		for (j=i-1; j>=0 && a[j] > a[j+1]; j--) {
			swap( &a[j+1], &a[j] );
		}

		/* the next 5 lines is just for printing interim results */
		printf ("After i=%2d: ",i);
		for (j=0; j<=i; j++) printf(" %2d", a[j]);
		printf("  ||  ");
		for (   ; j<n; j++) printf(" %2d", a[j]);
		printf("\n");

	}
}
