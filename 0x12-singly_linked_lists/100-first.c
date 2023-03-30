#include <stdio.h>

/**
 * tortoise - prints before main
 */
void __attribute__ ((constructor)) tortoise()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
