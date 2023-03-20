#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_len - find length of string
 * @str: string
 * Return: length
 *
 */

int string_len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++);

	return (i);
}

/**
 * string_cpy - copies the string pointed to by src, including the terminating
 *	    null byte, to a buffer pointed to by dest
 * @dest: buffer storing the string copy
 * @src: source string
 *
 * Return: pointer to the dest
 *
 */

char *string_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= string_len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new struct dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *copy_of_name;
	char *copy_of_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(string_len(name) + 1);
		if (copy_of_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = string_cpy(copy_of_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(string_len(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = string_cpy(copy_of_owner, owner);

	}
	else
		dog1->owner = NULL;
	return (dog1);
}
