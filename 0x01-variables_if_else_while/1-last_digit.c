#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - print the last nigit of the number
 *
 * Return: (0)
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	printf("%d and is 0\n", n);
	else if (n > 5)
	printf("%d is greater than 5\n", n);
	else if (n < 6 && n != 0 )
	printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
