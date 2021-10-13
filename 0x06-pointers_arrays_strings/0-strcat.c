#include "main.h"
/**
 * *_strcat - concatenates two strings.
 *@dest: char
 *@src: char
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		scr++;
	}
	*dest = '\0';
	return (start);
}
