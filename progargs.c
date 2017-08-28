/* Print command line arguments.
*/
#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i;
	printf("argc = %d\n", argc);
	for (i=0; i<argc; i++) {
		printf("argv[%d] = \"%s\"\n", i, argv[i]);
	}
	return 0;
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
