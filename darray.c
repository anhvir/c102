/* ------------- working with dynamic array -----------------
   + define a datatype for a (dynamic) array of data_t type
     (ie. each element of the array is of data type data_t)
   + allowing operations:
        - creating an array
        - adding an element to the end of the array
        - removing the last element from the array and returning it
        - checking if an array is empty (ie having no element)
   ============================================================ */  

#define INIT_SIZE 10
typedef struct {
	data_t *a;
	int n;
	int size;
} array_t;

array_t *create_array() {
	array_t *a= malloc(sizeof(*a));
	assert(a);
	a->n= 0;
	a->size= INIT_SIZE;
	a->a= malloc(a->size * sizeof( *(a->a) ));
	assert(a->a);
	return a;
}

void array_add(array_t *a, data_t x) {
	if (a->n == a->size) {
		a->size *= 2;
		a->a = realloc(a->a, a->size * sizeof( *(a->a) ));
		assert(a->a);
	}
	a->a[a->n++]= x;
}


// function array_traverse: traverse array 
//     and apply function process(x) to each element
//     of the array
// Usage example: suppose that in the main program
//     we defined function:
//        void print(data_t x)
//     which print the data x,
//     Then the call:
//        traverse(a, print) 
//     will print all element of array_t *a  

void array_traverse(array_t *a, void (*process)(data_t x) ) {
	int i;
	for (i=0; i<a->n; i++) {
		process(a->a[i]);
	}
}


