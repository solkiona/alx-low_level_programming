#include "main.h"

/**
 * _memset - writes a function that fills memory with a constant byte
 * @s: input pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: returns a character s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
