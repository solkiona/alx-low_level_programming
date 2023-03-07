#include "main.h"

/**
 * _strchr - writes a function that locates a character in a string
 * @s: Input string
 * @c: String to be matched
 * Return: Returns a pointer to the matched string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else
		return (NULL);
}
