#include "main.h"

/**
 * _memset - function with 3 arguments
 * @s: char
 * @b: char
 * @n: int
 *
 * Description: fills memory with a constant bye
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
