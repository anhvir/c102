#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000

int read_array(int A[]);
void print_array(int A[], int n);
int most_freq(int A[], int n); 
    
int main(int argc, char *argv[]) {
    int A[MAX_N];
    int n=0;
    // read values for array
    n= read_array(A);  
    print_array(A, n);
    printf("%d values read into array\n", n);
    printf("The most frequent value is %d\n", most_freq(A, n));
  
    
    return 0;
}

// returns the value appearing most frequently in array A
int most_freq(int A[], int n) {
    int i, val, freq= 0;  // val= the most-freq-so-far
                       // freq= freq  of val                    
    
    for (i=0; i<n; i++) {
        
        int freqAi= 0, j;
        
        int x= A[i];
        //freqAi= frequency of x in array A
        for (j=0; j<n; j++) {
            if (x==A[j]) {
                freqAi++;
            }
        }    
            
        if (freqAi > freq || freqAi==freq && A[i]<val) {
           val= A[i];
           freq= freqAi;
        }
    }
    return val;
}
