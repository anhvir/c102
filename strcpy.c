/* Implementation of the string function strcpy.
*/
#include <stdio.h>

char *strcpy1(char*, char*);
char *strcpy2(char*, char*);

int
main(int argc, char** argv) {
	char str[1000];
	strcpy1(str, "Test One");
	printf("%s\n", str);
	strcpy2(str, "Test Two");
	printf("%s\n", str);
	return 0;
}

char *strcpy1(char dest[], char src[]) {
	int i=0;
	while (src[i]!='\0') {
		dest[i] = src[i];
		i = i+1;
	}
	dest[i] = '\0';
	return dest;
}

char *strcpy2(char *dest, char *src) {
	char *p=dest;
	while ((*p++ = *src++))
		/* nothing */ ;
	return dest;
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
