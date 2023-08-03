#include "main.h"

/**
 * is_prime_number - returns a prime number
 * @n: accepts parameter
 * Return: a value
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_num(n, n - 1));
}
/**
 *  prime_num - second function
 * @a: first par
 * @b: second para
 * Return: a value
 */

int prime_num(int a, int b)
{
	if (b == 1)
		return (1);
	else if (a % b == 0 && b > 0)
		return (0);
	else
		return (prime_num(a, b - 1));
}
