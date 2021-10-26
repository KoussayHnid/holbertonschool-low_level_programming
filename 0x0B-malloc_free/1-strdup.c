#include "main.h"
/**
 * *_strdup - function with one argument
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
