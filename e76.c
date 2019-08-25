/*     
	Purpose : Implementing exercise 7.6 of the text book:
              Write a function to sort an array of n integers
                in acsending order, using selection sort. 		 

	Author :
	Date   :
	Note   : the scaffolding supplied by Anh Vo, anhvir@gmail.com

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000		/* maximal array size */ 

int read_array(int a[]); 
void print_array(char *title, int a[], int n);
void sel_sort(int a[], int n);
void rec_sel_sort(int a[], int n);

int
main(int argc, char *argv[]) {
	int a[MAX_N];   // "a" is an array of upto MAX_N integers
	int n=0;		// "n" - current number of elements in array

	n= read_array(a);
	print_array("Original array", a, n);
	
	/* Change the number "1" belows to "0"
	   for experimenting with rec_sel_sort
	*/
	#if 1
		printf("\nUSING ITERATIVE SELECTION SORT\n");
		sel_sort(a,n);
	#else
		printf("\nUSING RECURSIVE SELECTION SORT\n");
		rec_sel_sort(a,n);
	#endif
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
   using selection sort    
*/	
void sel_sort(int a[], int n){
	/* FIXME ; implement this function */
	
	fprintf(stderr, "*** Function sel_sort not yet implemented ***\n");	
	fprintf(stderr, "*********************************************\n");	

}

/* sorting elements of a[] in increasing order
   using recursive selection sort    
*/	
void rec_sel_sort(int a[], int n){
	/* FIXME ; implement this function */
	
	fprintf(stderr, "*** Function sel_sort not yet implemented ***\n");	
	fprintf(stderr, "*********************************************\n");	

}
