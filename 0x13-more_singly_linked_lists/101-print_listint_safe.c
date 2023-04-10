#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked list to search
 * Return: NULL - if no loop
 *	   Or address of node where loop starts
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}

/**
 * print_listint_safe - prints a listint_t linked list,
 *			even if it has a loop
 * @head: head of list to print
 * Return: number of nodes to be printed
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop;
	listint_t *loopnode;

	loopnode = find_listint_loop((listint_t *) head);

	for (len = 0, loop = 1; (head != loopnode || loop)
			&& head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("->[%p] %d\n", (void *) head, head->n);
	return (len);
}