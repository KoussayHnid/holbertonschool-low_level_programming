#include "main.h"

/**
 * clear_bit - function with two arguments
 * @n: pointer
 * @index: int
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);

}
