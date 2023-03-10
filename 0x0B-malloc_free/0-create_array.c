#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *	          and initializes it with a specific char
 * @size: size of the array to be intialised
 * @c: the char to intailise the array with
 *
 * Return: NULL if size is 0, or it fails
 *	   Otherwise, a pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
