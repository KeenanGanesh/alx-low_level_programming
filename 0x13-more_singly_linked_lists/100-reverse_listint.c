#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head pointer of listint_t linked list
 * Return: pointer to the first node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = forward;
	}

	(*head)->next = previous;

	return (*head);
}
