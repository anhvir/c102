/* A program for playing with scanf
   Run it, try it with different inputs and see how scanf work
   
   Created by Anh Vo, avo@unimelb.edu.au, 05/AUG/2021
   Updated by:  

   NOTES: This program contains almost no comments
          But by now we likely can understand it
*/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int counter, n= -1;
	char c= '?';
	double x;

	printf ("Hello, hello, let's try to execute scanf:\n\n");

	printf("Please input data for an int n, a char c, a double x: ");
	counter= scanf("%d%c%lf", &n, &c, &x);
	// above scanf(...) is a function call, this function returns
	//   the number of data items it successfully read from input stream
	//   hence, "counter" can have value 3, 2, 1, or even 0 
	//   "counter" can't be > 3, right?
	
	printf("\nThank you for your input! I've successfully got:\n");
    if (counter>0) {
		printf("1. an int(teger) value n= %d\n", n);
	}
    if (counter>1) {
		printf("2. a char(acter) value c= %c\n", c);
	}
    if (counter>2) {
		printf("3. a double (real) value x= %lf\n", x);
	}
	if (counter<1) {
		printf("    oops, sorry, I was unable to get any data from your input.\n");
	}

	printf("\nSUMMARY: I, the computer, wanted to get 3 data values from you.\n");  
	printf("At the end I have successfully read %s %d of them.\n",
	      counter<3? "only" : "all", counter);
	if (c==' ') {
		printf("Note that the value I got for c is a space (' ')\n");
	}
	if (counter<3) {
		printf("Please work out WHY before continuing...\n\n");
	}

	// Next code line: get rid of remaining stuffs in the input buffer
	//      by skipping all charracters till the first newline
	while (getchar()!='\n');

	printf("Press ENTER to continue...");
	while (getchar()!='\n');

 
	printf("\n");
	printf("I suggest you to try different & crazy input, like:\n");
	printf("    (you can copy 1 line at a time and feed it to scanf when re-running)\n\n");
  
	printf("10A1.2345678\n");
	printf("10 A1.2345678\n");
	printf("Hello?\n");
	printf("10A 1.2345678\n");
	printf("  10A      1.23 45678\n");
	printf("  10AB 1.23\n");

	printf("\nAlso, LATER (after a few experiments), modify the code, change the line:\n");
	printf("\tcounter= scanf(\"%%d%%c%%lf\", &n, &c, &x);\n");
	printf("to\n");
	printf("\tcounter= scanf(\"%%d %%c%%lf\", &n, &c, &x);\n");
	printf("and repeat the experiments to see what the additional SPACE does\n");

	return 0;
}




