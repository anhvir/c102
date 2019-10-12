#include <stdio.h>
#include <stdlib.h>   
#include <assert.h>


/* ------------- working with dynamic array -----------------
   + define a datatype for a (dynamic) array of data_t type
     (ie. each element of the array is of data type data_t)
   + allowing operations:
        - creating an array
        - adding an element to the end of the array
        - removing the last element from the array and returning it
        - checking if an array is empty (ie having no element)
   ============================================================ */  


/* ----------- The following part is for testing ------------- */ 

typedef int data_t;

#include "listops.c"
#include "darray.c"

// building stack
typedef  list_t ms_t;
ms_t *create_stack(){
	return make_empty_list();
}
void push(ms_t *s, data_t x) {
	insert_at_head(s, x);
}
data_t pop(ms_t *s) {
	data_t x= get_head(s);
	get_tail(s);
	return x;
}
int is_stack_empty( ms_t *s) {
	return is_empty_list(s);
}

int main(int argc, char *argv[]) {
	ms_t *a= NULL;
	int i;
	data_t x;

	a= make_empty_list();	
	printf("****1\n");
	for (i=0; i<10; i++) {
		x= i;
		printf("***** 1.1 a=%p  x=%d\n", a, x);
		push(a, x);
		printf("***** 1.2\n");

		printf("added %d\n", x);
	}
	
	printf("****2\n");
	
	while (!is_stack_empty(a)) {
		x= pop(a);
		printf("removed %d\n", x);
	}	
	
	printf("****3\n");
	
	return 0;
} 	



