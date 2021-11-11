#include "lists.h"

/**
* print_list -  that prints all the elements of a list_t list.
* @h: pointer
* Return: x
*/

size_t print_list(const list_t *h)
{

	int i;
	const list_t *y = h;
	size_t x = 0;

	for (i = 0; y; i++)
	{
		if (y->str == NULL)
	{
			printf("[0] (nil)\n");
	}
		else
	{
			printf("[%d] %s\n", y->len, y->str);
	}
	y = y->next;
	x++;
	}
	return (x);
}
