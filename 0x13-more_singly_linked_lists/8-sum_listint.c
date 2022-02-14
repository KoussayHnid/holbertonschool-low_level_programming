#include "lists.h"

/**
 * sum_listint - that returns the sum of all
 * the data (n) of a listint_t linked lis
 *@head: pointer
 *
 * Return: tmp
 */
int sum_listint(listint_t *head)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
