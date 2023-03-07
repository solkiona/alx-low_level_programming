#include "main.h"

/**
 * _strspn - writes a function that gets length of a prefix substring
 * @s: input string
 * @accept: bytes contained in accept
 * Return: returns number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = 0;
				break;
			}
		}
		if (count == 1)
		{
			break;
		}
	}
	return (i);
}
