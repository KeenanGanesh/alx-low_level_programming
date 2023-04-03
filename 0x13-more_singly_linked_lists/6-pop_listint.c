#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *	         and returns the head node’s data
 * @head: pointer to the address of the head of the listint_t linked
 * Return: the data stored in the deleted head node
 *
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
