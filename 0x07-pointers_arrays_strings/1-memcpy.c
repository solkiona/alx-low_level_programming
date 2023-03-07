#include "main.h"

/**
 * _memcpy - writes a functionthat copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: Returns the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = dest;
	char *p2 = src;

	while (n--)
		*p1++ = *p2++;
	return (dest);
}
