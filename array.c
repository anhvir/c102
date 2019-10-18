
#define INIT_SIZE 2
// array_t is defined for working with dynamic array
//    where the array size (ie its capacity) can be changed
typedef struct {
	int size;      // current size (ie capacity) of array
	int n;         // number of elements that currenly in-use
	data_t *a;     // the memory chunk for the array elements
} array_t;

// create an "empty" array and returns a pointer to it
array_t* create_array() {
	array_t *p;
	p= malloc(sizeof(*p));
	assert( p );
	p->n= 0;
	p->size= INIT_SIZE;
	p->a = malloc( p->size *sizeof(*(p->a)) );
	assert(p->a);
	return p;
}

// add a data x to the end of array *p
void array_add(array_t *p, data_t x) {
	if (p->n == p->size) {
		p->size *= 2;
		p->a= realloc(p->a,  p->size *sizeof(*(p->a)) );
		assert(p->a);
	}
	p->a[  p->n ] = x;
	p->n++;
}

// remove and return the last element of array *p
data_t array_remove(array_t *p) {
	assert(p->n > 0);
	data_t x= p->a[p->n - 1];
	p->n--;
	return x;
}

// free all memory allocated to array *p
void free_array(array_t *p) {
	free(p->a);
	free(p);
}
