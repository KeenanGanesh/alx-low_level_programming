# 0x0C-more_malloc_free   

## General   
	* How to use the exit function   
	* What are the functions calloc and realloc from the standard library and how to use them   

### Tasks   
> 0. Write a function that allocates memory using malloc.   
	* __Prototype: void *malloc_checked(unsigned int b);__   
	* Returns a pointer to the allocated memory   
	* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98   
> 1. Write a function that concatenates two strings.   
	* __Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);__   
	* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated   
	* If the function fails, it should return NULL   
	* If n is greater or equal to the length of s2 then use the entire string s2   
	* if NULL is passed, treat it as an empty string   
> 2. Write a function that allocates memory for an array, using malloc.   
	* __Prototype: void *_calloc(unsigned int nmemb, unsigned int size);__   
	* The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.   
	* The memory is set to zero   
	* If nmemb or size is 0, then _calloc returns NULL   
	* If malloc fails, then _calloc returns NULL   
> 3. Write a function that creates an array of integers.   
	* __Prototype: int *array_range(int min, int max);__   
	* The array created should contain all the values from min (included) to max (included), ordered from min to max   
	* Return: the pointer to the newly created array   
	* If min > max, return NULL   
	* If malloc fails, return NULL   
