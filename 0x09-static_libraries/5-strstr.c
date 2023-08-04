#include "main.h"

/**
 * _strstr - fuction main
 * @haystack: first string parameter
 * @needle: second string parameter
 *
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

	while (*haystack && *pattern && *haystack == *pattern)
	{
		haystack++;
		pattern++;
	}

	if (!*pattern)
	return (Begin);
	haystack = Begin + 1;
	}
	return (NULL);
}

