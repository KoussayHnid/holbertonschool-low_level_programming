#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - print the number
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
	printf("%d is zero", n);
	else if (n > 0)
	printf("%d is positive", n);
	else if (n < 0)
	printf("%d is nigative", n);
	return (0);
}
