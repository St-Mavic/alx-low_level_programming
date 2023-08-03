#include "main.h"

/**
 * _sqrt_recursion - returns the sqare root of a number
 * @n: accaepts int
 *
 * Return: a value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt(n, 0));
}
/**
 * _sqrt - second function
 * @n: first parameter
 * @b: second parameter
 *
 * Return: a value
 */

int _sqrt(int n, int b)
{
	if (b * b > n)
		return (-1);
	else if (b * b == n)
		return (b);
	else
		return (_sqrt(n, b + 1));
}
