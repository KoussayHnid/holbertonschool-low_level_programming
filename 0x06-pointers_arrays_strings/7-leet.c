#include "main.h"
/**
 **leet - encodes a string into 1337
 *
 *
 *Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int j ;
	char ch[8] = {'O','L','?','E','A','?','?','T'};

	while (s[i])
	{
	for (j = 0; j <=7; j++)
	{
	if ((s[i] = ch[j]) || (s[i] - 32 == ch[j]))
		s[i] = j;
	}
	i++;
	}
	return (s);
}
