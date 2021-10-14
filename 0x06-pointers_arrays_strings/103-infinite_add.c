#include "main.h"
/**
 * infinite_add - function with 4 arguments
 * @n1: char
 * @n2: char
 * @r: char
 * @size_r: int
 *
 * Return: sum of two integers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	while (n1[i] != '\0')
		i++;
	while (n2[i] != '\0')
		i++;

	*r = *(r + size_r);
	while (n1[i] > 0 || n1[j] > 0)
	{
		if (n1[i] + n2[j] > 0)
			*r = n1[i - 1] + n2[j - 1] + 1;
		else
			*r = n1[i] + n2[j];
		i--;
		j--;
	}
	return (r);
}
