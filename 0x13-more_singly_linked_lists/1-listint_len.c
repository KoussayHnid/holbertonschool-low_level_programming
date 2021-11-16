#include "lists.h"

/**
 *listint_len - that returns the number of elements in a linked listint_t list
 *@h: pointer
 *
 *Return: int
 */
size_t listint_len(const listint_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
