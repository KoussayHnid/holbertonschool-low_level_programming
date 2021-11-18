#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to flip 
 * to get from one number to another.
 * @n: int
 * @m: int
 *
 * Return: x
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y;
	unsigned int x = 0;

	y = n ^ m;

	while (y != 0)
	{
		if ((y & 1) == 1)
			x++;
		y = y >> 1;
	}
	return (x);
}
