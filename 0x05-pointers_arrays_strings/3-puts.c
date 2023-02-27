#include "main.h"

/**
 * _puts - writes a function that prints a string
 * @str: input string
 * Return: No return value
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
