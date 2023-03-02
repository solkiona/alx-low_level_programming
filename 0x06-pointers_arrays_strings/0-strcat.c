#include "main.h"

/**
 * _strcat - writes a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: returns 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	char *p2 = src;

	while (*p != '\0')
	{
		p++;
	}
	while (*p2 != '\0')
	{
		*p++ = *p2++;
	}
	return (dest);
}
