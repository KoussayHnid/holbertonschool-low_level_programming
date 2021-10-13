#include "main.h"

/**
 * reverse_array - function with two arguments
 * @a: int
 * @n: int
 *
 * Return: value
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
