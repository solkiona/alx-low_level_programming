#include "main.h"

/**
 * _strpbrk - writes a function that searches
 * @s: Main string
 * @accept: Search string
 * Return: Returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
