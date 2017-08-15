/*    
	Purpose : using arrays of integers 
			  (note: incremental development!!!)
   
	Started by: Anh Vo, anhvir@gmail.com, 10 Apr 2017
	Finished by: 

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000		/* maximal array size */ 

int readArray(int a[]); 
void printArray(char *title, int a[], int n);
void ins_sort(int a[], int n);

int
main(int argc, char *argv[]) {
	int n=0;			/* current number of elements in array */
	int a[MAX_N];

	n= readArray(a);
	printArray("Original array", a, n);
	
	ins_sort(a,n);
	printArray("Sorted array", a, n);

	return 0;
}

/* reads array from stdin  
   returns the number of elements in the array
*/ 
int readArray(int a[]) {  
	int i;
	for (i=0; scanf("%d", &a[i])==1; i++);
	return i;
}


/* print out the array a[] after printing a title
*/  
void printArray(char *title, int a[], int n) {
	int i;
	printf("%s:\n", title);
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

		/* printing interim results */
		printf ("Step %2d: ",i);
		for (j=0; j<=i; j++) printf(" %2d", a[j]);
		printf("  ||  ");
		for (   ; j<n; j++) printf(" %2d", a[j]);
		printf("\n");

	}
}
