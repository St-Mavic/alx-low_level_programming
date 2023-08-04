#include "main.h"
/**
 * _isupper - A function with parameters
 * @c: parameter
 * Return: one or zero
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
