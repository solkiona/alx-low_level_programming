#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	
	if (b == NULL)
		return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		ret = ret << 1 | (b[i] - '0');
	}
	return (ret);
}
