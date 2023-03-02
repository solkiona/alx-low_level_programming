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

	while (*p != '\0')
	{
		*p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	return (dest);
}
