#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - that reallocates a memory block using malloc and free
 *@ptr: int
 *@old_size: int
 *@new_size: int
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
		{
			free(x);
			return (NULL);
		}
		return (x);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	x = malloc(new_size);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
		x[i] = *((char *)ptr + i);

	free(ptr);
	return (x);
}
