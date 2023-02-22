#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 0.
* on error, -1 is returned, and errno is set appropriately.
*/
int _abs(int c)
{
	if (c < 0)
	{
	c *= -1;
	return c;
	}
	else
	{
	return c;
	}
}
