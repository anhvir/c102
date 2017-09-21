/* Anh Vo, anhvir@gmail.com, skeleton for COMP10002 Workshop Week 9 */

#include <stdio.h>
#include <stdlib.h>    /* note: this one for malloc() and free()  */
#include <string.h>

#define N 5

char *string_dupe(char *s);
char **string_set_dupe(char **s);
void string_set_free(char **s);   

int main(int argc, char *argv[]) {
    char *ss[N]={ "string 1 1111",
    			  "string 2 2222 2222",
    			  "string 3 333 333 333",
    			  "string 4 4444 4444 4444 4444"
				};
	char *s="The cat in the hat";
  
    char **copy_of_ss;
	char *copy_of_s;

    /* (1) now, copy s to copy_of_s, then print both s and copy_of_s */



    /* (2) now, copy ss to copy_of_ss, then print both ss and copy_of_ss */


    /* (3) now, copy *argv[] to ??? amnd print both */


    /* (4) now, free all the things you malloc-ed */


    return 0;
} 	


char *string_dupe(char *s) {
	char *t= malloc( strlen(s+1) * sizeof(*t) );
	strcpy(t,s);
	return t;
} 

char **string_set_dupe(char **s) {

	return NULL;  // FIXME
}

void string_set_free(char **s) {

}   
