#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, except for e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
		putchat('\n');

	return (0);
}
