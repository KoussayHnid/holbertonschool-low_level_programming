#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @n:first letter
 * Return: 0
 */
int _isalpha(int n)
{
	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
	return (1);
	else
	return (0);
}
