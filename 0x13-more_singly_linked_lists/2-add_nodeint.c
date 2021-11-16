#include "lists.h"

/**
 **add_nodeint - that adds a new node at the beginning of a listint_t list.
 *@head: pointer
 *@n: value
 *
 *Return: temp
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
