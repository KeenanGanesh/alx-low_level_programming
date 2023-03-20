#include "main.h"
#include <stdlib.h>

/**
 * _prntstr - prints a string
 *
 * @s: string to print
 *
 */

void _prntstr(char *s)
{
	while (*s)
		_putchar(*s++);
}

/**
 * numstrchk - checks arg array to see if there are numeric strings
 *	       converts from ascii to byte int and returns the length
 *
 * @s: string to check
 *
 * Return: length of string
 *	   Exit 98 if not numeric
 *
 */

long int numstrchk(char *s)
{
	long int len = 0;

	if (*s == 0)
	{
		_prntstr("Error\n");
		exit(98);
	}

	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			_prntstr("Error\n");
			exit(98);
		}
		*s -= '0';
		len++;
		s++;
	}
	return (len);
}

/**
 * _calloc_buller - allocate a block of memory of size * num and init to '0'
 *
 * @num: number of elements to allocate
 * @size: size of element
 *
 * Return: exit 98 on failure
 *	   pointer to allocated space
 *
 */

void *_calloc_buffer(long int num, long int size)
{
	void *ret;
	char *ptr;

	ret = malloc(num * size);
	if (ret == 0)
	{
		exit(98);
	}

	size = size * num;
	ptr = ret;
	ptr[--s] = 0;
	while (size--)
		ptr[size] = '0';

	return (ret);
}
