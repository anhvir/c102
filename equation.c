/* Solving equation ax + b = 0  
   by Anh Vo, anhvir@gmail.com
   Last updated: 04 AUG 2017
*/	


#include <stdio.h>

int main (int argc, char *agrv[]) {
   float a, b, x;
   printf ("a, b = "); 
   scanf("%f %f", &a, &b);
   
   if (a==0 && b==0) {
      printf ("unlimited number of solutions\n");
   } else if (a==0) {
      printf ("no solution\n");
   } else {
      printf ("solution x= %f\n", -b/a); 
   }    
   return 0;
} 

