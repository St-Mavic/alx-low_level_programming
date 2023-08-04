#include "main.h"
/**
 * _isdigit - checking for digits
 * @c: the parameter
 * Return: one or zero
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
