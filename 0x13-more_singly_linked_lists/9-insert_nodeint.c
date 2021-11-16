#include "lists.h"

/**
 **insert_nodeint_at_index - function that inserts
 * a new node at a given position
 *@head: pointer
 *@idx: int
 *@n: int
 *
 *Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *y;
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
	return (NULL);
	}
	tmp->n = n;
	y = *head;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}
	while (y != NULL)
	{
		if (x == idx - 1)
		{
			tmp->next = y->next;
			y->next = tmp;
		}
		x++;
		y = y->next;
	}
	if (idx > x)
		return (NULL);
	return (tmp);
}
