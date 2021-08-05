/* Solving equation ax + b = 0  
   Assumptions: a and b can be any real number, including 0

   by Anh Vo, anhvir@gmail.com
   Last updated: 04 AUG 2021

   Note: this file contains a few errors, you need to fix them first!
*/	


#include <stdio.h>

int main (int argc, char *agrv[]) {

   double a, b, x;
   printf ("a, b = "); 
   scanf("%lf %lf", a, b);
   
   if (a=0 && b=0) {
      printf ("solution: x= any real number!\n");
   } else if (a==0) {
      printf ("solution: no solution\n");
   } else :
      printf ("solution: x= %.2lf\n", -b/a) 
       
   return 0;
} 

