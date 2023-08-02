#include "main.h"

/**
 *factorial - the factorial of a number
 *@n: nth number
 *
 * Return: a value
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (-1);
}
