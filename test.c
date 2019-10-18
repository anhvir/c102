#include <stdio.h>
#include <stdlib.h>   
#include <assert.h>

typedef struct {
	double x,y;
} data_t;

#include "array.c"

typedef array_t sstack_t;

sstack_t* create_stack() {
	return create_array();
}

void push (sstack_t *s, data_t x) {
	array_add(s, x);
}
 
data_t pop(sstack_t *s) {
	return array_remove(s);
}

int is_empty(sstack_t *s) {
	return s->n==0;
}

void free_stack(sstack_t *s) {
	free_array(s);
}

int main(int argc, char *argv[]) {
	sstack_t *s= create_stack();
	int i;
	data_t d;
	for (i=0; i<10; i++) {
		
		d.x= i;
		d.y= i*10;
		push(s, d);
	}

	while ( !is_empty(s)) {
		d= pop(s);
		printf("pop (%.0f, %.0f)\n", d.x, d.y);
	}

	// uncomment the next line to make the program memory-leak-free	
	// free_stack(s);
	return 0;
} 	

