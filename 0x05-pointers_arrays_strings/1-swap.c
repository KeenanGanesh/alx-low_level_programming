#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First interger
 * @b: Second interger
 * Return: No return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
		*a = *b;
		*b = c;
}
