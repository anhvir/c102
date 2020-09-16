/*  Some string functions, implemented by <YOUR NAME>
    Skeleton supplied by Anh Vo, avo@unimelb.edu.au, for COMP10002 Workshop Week 7 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define N_LETTERS 26
void count_freq(char *s, int freq[]);   
int is_subsequence(char *s1, char *s2);  /* Grok W07 */
int is_anagram(char *s1, char *s2);      /* Grok W7X */

/* palindrome Grok W7X Ex7.12 */
int is_palindrome(char *); 

/* atoi  Grok W7X Ex 7.14 */
int my_atoi(char *);


int main(int argc, char *argv[]) {
	char *ss[]= {
    	"eat heat",                  /* [0] */
		"eat meat",                  /* [1] */ 
		"The cat in the hat",        /* [2] */
		"Algorithms",                /* [3] anagram with [4] */
		"Glamor Hits",               /* [4] */
		"rats live on no evil star",  /* [5] "exact" palindrome */
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal - Panama!", 
                                     /* [6] "extended" palindrome */
		"  123ABC",                  /* [7] - for atoi */ 
        ""
    };
	char *s, *s1, *s2;

	/* test palindrome here */
    
   
    /* test my_atoi here */



    /* test count_freq */
	int freq[N_LETTERS], i;
	s= ss[2];
	count_freq(s, freq);
	printf("string= %s\n freq= ",s);
	for (i=0; i<N_LETTERS; i++) {
		if (freq[i]) printf("%c:%d ", 'A'+i, freq[i]);
	}
	printf("\n\n");

    /* test is_subsequence */
	s1= ss[0]; 
	s2= ss[2];
	printf("is_subsequence(\"%s\",\"%s\")= %d\n", s1, s2, is_subsequence(s1,s2));
	s1= ss[2]; 
	printf("is_subsequence(\"%s\",\"%s\")= %d\n", s1, s2, is_subsequence(s1,s2));
	printf("\n");


    /* test is_anagram */
	s1= ss[3];
	s2= ss[4];
	printf("is_anagram(\"%s\",\"%s\")= %d\n", s1, s2, is_anagram(s1,s2));
	s1= ss[2];
	printf("is_anagram(\"%s\",\"%s\")= %d\n", s1, s2, is_anagram(s1,s2));
	printf("\n");    
   
    /* test is_palindrome */
	//s= ss[5];
	//printf("is_palindrome(\"%s\")= %d\n", s, is_palindrome(s));
	//s= ss[6];

	return 0;
} 	

/* returns true if its argument string is a palindrome, that is, 
   reads exactly the same forwards as well as backwards; 
   and false if it is not a palindrome. 
   For example, “rats live on no evil star” is a palindrome according to this
   definition, while “A man, a plan, a canal, Panama!” is not.
*/ 
int is_palindrome(char *s) {
	return 1;
}

/* converts a character string into an integer value
   and returns that value
*/
int my_atoi(char *s) {
	return 0;
}



/* count frequencies of alphabetic characters in s, ignoring case
   frequencies will be stored in array freq[26],
   where freq[0] is frequency of 'A', freq[1] os frequency of 'B'...
*/
void count_freq(char *s, int freq[]) {  
}


/* Exercise 1 from lec06
   returns 1 if the characters in s1 appear within s2 
             in the same order as they appear in s1
   returns 0 otherwise
*/
int is_subsequence(char *s1, char *s2) {
	return TRUE;
} 

/* Exercise 3 from lec06
  returns 1 if the two strings contain the same letters, 
     possibly in a different order, and 0 otherwise, 
     ignoring whitespace characters, and ignoring case
  in addition, ignoring any non-alphabetic characters,
     including digits!
*/
int is_anagram(char *s1, char *s2) {
	return TRUE;
}

/* EXERCISE: add a function here for Exercise 2 of lec06.pdf 
             and for each of the exercises:
                 7.12: palindrome
                 7.14: atoi
*/     
