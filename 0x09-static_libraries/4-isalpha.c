#include "main.h"
/**
 * _isalpha - checking characters
 * @c: variable parameter
 * Return: no return type
 */

int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
