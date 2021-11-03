#include "function_pointers.h"
/**
 * print_name - function that print name
 * @name: char
 * @f: pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
