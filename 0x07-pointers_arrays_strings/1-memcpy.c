#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: first pointer
 * @src: second pointer
 * @n: nth number of items
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
