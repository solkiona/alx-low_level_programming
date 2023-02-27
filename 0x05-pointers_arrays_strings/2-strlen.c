#include "main.h"

/**
 * _strlen - writes a function that returns the length of a string
 * @s: input string array
 * Return: return count
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
