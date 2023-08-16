#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function
 * @name: takes a name para
 * @f: pointer
 * Return: null
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
