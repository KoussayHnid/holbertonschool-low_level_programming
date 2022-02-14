#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - that creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int total, i;

	total = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
