#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: index of the bit
 *
 * Return: -1 if an error occurs
 *	    1 if it worked
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maximum_bits;
	unsigned long int m = 1;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	m <<= index;
	*n = (*n | m);

	return (1);
}
