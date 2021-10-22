#include "main.h"
/**
 * main - function with two argument
 * @argc: int²
 * @argv: char
 *
 * Return: sum value
 */
int main(int argc, char *argv[])
{
	int i, j, r;

	r = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				} else
				{
					printf("Error\n");
					return (1);
				}
			}
			r += atoi(argv[i]);
		}
		printf("%d\n", r);
	} else
		printf("0\n");
	return (0);
}
