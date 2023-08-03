#include "main.h"
/**
 * is_palindrome - checks for the same words backward
 * @s: string
 *
 * Return: a value
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (my_pal(s, 0, _strlen(s)));
}
/**
 * _strlen - returns the length
 * @s: parameter
 *
 * Return: a value
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * my_pal - checks palindrome
 * @s: char string
 * @a: int para
 * @len: lenght
 *
 * Return: a value
 */

int my_pal(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	else if (a >= len)
		return (1);
	else
		return (my_pal(s, a + 1, len - 1));
}
