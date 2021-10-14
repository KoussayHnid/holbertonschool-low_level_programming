#include "main.h"

/**
 * _strncat - pointer function with 3 argument
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (star);
}
