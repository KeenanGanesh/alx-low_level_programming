#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of intergers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: If no element matches or size <= 0 then -1
 *	   Otherwise index of the first element for which the cmp function
 *	   does not return 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
