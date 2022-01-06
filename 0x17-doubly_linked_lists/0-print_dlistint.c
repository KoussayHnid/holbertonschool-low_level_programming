#include "lists.h"
/**
 * print_dlistint - that prints all the elements of a dlistint_t list
 * @h: pointer 
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
