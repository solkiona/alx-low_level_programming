#include "main.h"

/**
 * _strncat - writes a function that concatenates two strings
 * @dest: first input string
 * @src: second input string
 * @n: number of bytes
 * Return: returns 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	char *p2 = src;

	while (*p != '\0')
	{
		p++;
	}
	while (*p2 != '\0' && n != 0)
	{
		*p++ = *p2++;
		n--;
	}
	return (dest);
}
