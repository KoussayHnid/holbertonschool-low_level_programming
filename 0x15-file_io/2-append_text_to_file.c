#include "main.h"

/**
  * append_text_to_file - that appends text at the end of a file
  * @filename: char
  * @text_content: char
  *
  * Return: string
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
#include "main.h"
#include <string.h>

/**
  * strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	return (x);
}
