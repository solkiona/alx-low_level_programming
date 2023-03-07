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
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
