#include "lists.h"

/**
 *pop_listint - that deletes the head node of a listint_t linked list
 , and returns the head node’s data (n).
 *@head: pointer
 *
 *Return: int
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	x = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (x);
}
