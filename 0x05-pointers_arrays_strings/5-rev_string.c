#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@s: holi
 */
void rev_string(char *s)
{
	int i;
	int j;
	int tmp;
	int aux;

	while (s[i] != 0)
	{
		i++;
	}

	aux = i;
	i = 0;
	j = aux - 1;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}

}
