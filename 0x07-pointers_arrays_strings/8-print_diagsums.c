#include "main.h"

/**
 * print_diagsums - function with two arguments
 * @a: int
 * @size: int
 *
 * Return: value
 */
void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x += *(a + i * (size + 1));
		y += *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", x, y);
}
