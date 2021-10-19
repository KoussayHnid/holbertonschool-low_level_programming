#include "main.h"

/**
 * _strchr - function with two arguments
 * @s: char
 * @c: char
 *
 * Return: character in string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if ( *s == c )
		return (s);
	return (0);
}
