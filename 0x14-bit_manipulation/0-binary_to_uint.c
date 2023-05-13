#include "main.h"

/**
 * binary_to_uint - converts binary bits to their corresponding decimal value
 * @b: input binary character
 * Return: The decimal value of the converted binary strings
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Result = 0;

	if (b == NULL)
		return (NULL);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		result <<= 1 | b[i] - '0';

	}
	return (result);
}
