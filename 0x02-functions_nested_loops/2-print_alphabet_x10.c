#include "main.h"
/**
* print_alphabet_x10 -a function that prints 10 times the alphabet,
* 			 in lowercase, followed by a new line.
*
* 
*/
void print_alphabet_x10(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
		n++;
	}
}
