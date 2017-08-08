/* skeleton for Ex 5.6
   Purpose:
   Author: 
   Last updated:
*/

#include <stdio.h>

int is_amicable(int, int);
 

int main(int argc, char *argv[]) {
   int m, n;   
   
   /*  (1) do "standard" exercise 5.6   ----------------------------- */
   printf("Checking if 2 numbers form an amicable pair.\n");
   printf("Enter two numbers (0 0 to finish): ");
   while ( scanf("%d%d", &m,&n)==2 && m>1 && n>1 && m!=n) {
      printf("%d and %d ", m, n);
      if (is_amicable(m,n)) {
		printf("make an amicable pair!\n");
	  }	else {
        printf("unfortunately do not form an amicable pair.\n");
      }
   }       


   /*  (2) do "challenge part" of exercise 5.6   ------------------- */
   /* FIXME: add your code here for the challanging part */


   return 0;            
}

/* FIXME: implement your function here */
/* returns 1 if (a,b) is an amicable pair, 0 otherwise */
int is_amicable(int a, int b) {

   return 0;
}

