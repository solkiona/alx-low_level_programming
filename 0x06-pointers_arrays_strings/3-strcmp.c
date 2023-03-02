#include "main.h"

/**
 * _strcmp - writes a function that compares two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: returns a number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
