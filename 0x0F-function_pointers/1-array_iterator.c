#include "function_pointers.h"

/**
 * array_iterator - function with 3 arguments
 * @array: int
 * @size: int
 * @action: function 
 *
 * Description: executes a function given as a parameter on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
