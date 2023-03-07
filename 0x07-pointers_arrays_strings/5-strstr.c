#include "main.h"

/**
 * _strstr - writes a function that locates a substing
 * @haystack: main string
 * @needle: substring
 * Return: returns a pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
{
	char *h = haystack;
	char *n = needle;

	while (*haystack && *n && (*haystack == *n))
	{
		haystack++;
		n++;
	}
	if (!*n)
	{
		return (h);
	}
	haystack = h + 1;
}
	return (NULL);
}
