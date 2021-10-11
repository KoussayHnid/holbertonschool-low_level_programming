#include "main.h"
/**
 *_strlen - that returns the length of a string
 *
 *Return: string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i ) != '\0')
	{
		i++;
	}
	return i;
}
