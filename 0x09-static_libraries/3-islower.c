#include "main.h"
/**
 * _islower - checks if a character is lower case or not
 * @c: parameter
 * Return: no return type
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
