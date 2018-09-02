/* Anh Vo, anhvir@gmail.com, for COMP10002 Workshop Week 7 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define N_LETTERS 26
void count_freq(char *s, int freq[]);   
int is_subsequence(char *s1, char *s2);
int is_anagram(char *s1, char *s2); 

int main(int argc, char *argv[]) {
    char *s1="eat heat"; 
    char *s1b="eat meat"; 
	char *s2="The cat in the hat";
	char *s3="Algorithms";
	char *s4="Glamor Hits";
	char *s5="Algore eats";
	char *s6="Glamor 123 Hits 4+5=9";
   
    /* test count_freq */
	int freq[N_LETTERS], i;
	count_freq(s2, freq);
	printf("string= %s\n freq= ",s2);
	for (i=0; i<N_LETTERS; i++) {
		if (freq[i]) printf("%c:%d ", 'A'+i, freq[i]);
	}
	printf("\n\n");

    /* test is_subsequence */
	printf("is_subsequence(\"%s\",\"%s\")= %d\n", s1, s2, is_subsequence(s1,s2));
	printf("is_subsequence(\"%s\",\"%s\")= %d\n\n", s1b, s2, is_subsequence(s1b,s2));

    /* test is_anagram */
	printf("is_anagram(\"%s\",\"%s\")= %d\n", s3, s4, is_anagram(s3,s4));
	printf("is_anagram(\"%s\",\"%s\")= %d\n\n", s3, s5, is_anagram(s3,s5));
	printf("is_anagram(\"%s\",\"%s\")= %d\n\n", s3, s6, is_anagram(s3,s6));
       

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

/* EXERCISE: add a function here for Exercise 2 of lec06.pdf */
