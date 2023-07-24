#include "main.h"

/**
 * _strlen - printing the length of a string
 * @s: parameter of a function
 *
 * Return: no value
 */

int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
