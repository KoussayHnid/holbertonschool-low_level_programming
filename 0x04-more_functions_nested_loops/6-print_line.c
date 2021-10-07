#include "main.h"
/**
 * print_line - Draws a straight line using the character
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	{
	for (len = 0; len < n; len++)
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
