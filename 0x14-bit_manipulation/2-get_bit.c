#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit
 * @index: index of the bit
 *
 * Return: - 1 if an error occurs
 *	   Or the value of the bit at index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int maximum_bits;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
