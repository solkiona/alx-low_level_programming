#include "main.h"

/**
 * _strcmp - writes a function that compares two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: returns a number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			break;
		op = s1[i] - s2[i];
		i++;
	}
	return (op);
}
