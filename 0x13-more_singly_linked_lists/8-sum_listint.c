#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 - if the list is empty
 *	   Or - sum
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
