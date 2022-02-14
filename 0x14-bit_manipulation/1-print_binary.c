#include "main.h"

/**
 * print_binary - that prints the binary representation of a number.
 * @n: int
 *
 * Return: int
 */
void print_binary(unsigned long int n)
{
	unsigned long x = n;

	if (x > 1)
	{
		print_binary(x >> 1);
	}
	_putchar((x & 1) + '0');
}
