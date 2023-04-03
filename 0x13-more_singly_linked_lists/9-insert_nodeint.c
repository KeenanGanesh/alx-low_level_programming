#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head pointer of the linked list
 * @idx: index to insert new mode
 * @n: new nodes data
 * Return: NULL - if it failed
 *	   Or - address of the new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (index < (idx - 1))
	{
		tmp = tmp->next;
		index++;

		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
