/* Anh Vo, anhvir@gmail.com, skeleton for COMP10002 Workshop Week 9 */

#include <stdio.h>
#include <stdlib.h>    /* note: this one for malloc() and free()  */
#include <string.h>
#include <assert.h>

#define N 5

char *string_dupe(char *s);
char **string_set_dupe(char **s);
void string_set_free(char **s);   
void string_set_print(char **s);

int main(int argc, char *argv[]) {
	char *s="The cat in the hat";
	char *copy_of_s;
    char **copy_of_argv;

    /* (1) now, copy s to copy_of_s, then print both s and copy_of_s */


    /* (2) now, copy argv to copy_of_argv, then print both of them */


    /* (3) now, free all the things you malloc-ed */

	
	/* (4) Can we free argv?   */

    return 0;
} 	


// returns a duplicate of string "s"
char *string_dupe(char *s) {
	char *t= malloc( strlen(s+1) * sizeof(*t) );
	assert(t);
	strcpy(t,s);
	return t;
} 


// this function creates a copy of the set of strings "s",
//    assumed that "s" includes a sentinel pointer of NULL
//    as its last element,
// the function returns a pointer to the copy
char **string_set_dupe(char **s) {

	return NULL;  // FIXME
}

// this function prints the set of strings "s"
void string_set_print(char **s){
	char **p= s;
	while (*p) {
		printf("%s\n", *p);
		p++;
	}
}

// this function free all of the memory associated 
//    with the string set "s". 
void string_set_free(char **s) {

}   
