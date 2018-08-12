/*    
	anhvir@gmail.com: skeleton for ex 7.4 Solution 2
    Ex 7.4: Write a program that reads as many as 1,000 integer values
      and counts the frequency of each value in the input.

    For Solution 2 we impose 2 conditions on input data:
       1) all values in the array is positive, and
       2) UPPER_LIMIT is an upper limit of all array's values.

    You need to think of a Solution that does not use sorting, and perhaps
    is more efficient than solution 1 in some cases. 
  
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000	      	/* maximal array size */ 
#define UPPER_LIMIT 100     /* the upper limit    */ 

int read_array(int a[]); 
void print_array(char *title, int a[], int n);
void print_freq(int a[], int n);

int
main(int argc, char *argv[]) {
	int n=0;			/* current number of elements in array */
	int a[MAX_N];

	n= read_array(a);
	printf("%d values read into array\n", n);
	print_array("Original array", a, n);
	
	print_freq(a, n);

	return 0;
}

/* count and print frequency of each value in the array a */
/* NOT DONE YET - FIX ME */ 
void print_freq(int a[], int n) {

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
