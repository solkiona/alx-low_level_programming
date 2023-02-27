#include "main.h"

/**
 * rev_string - writes a function that reverses a string.
 * @s: input string
 * Return: No return value
 */
void rev_string(char *s)
{
	for (int i = 0; i < 1000; i++)
	{
		if (s[i] == '\0')
		{
			int j = i - 1;

			while (j >= 0)
			{
				_putchar(s[j]);
				j--;
			}
			break;
		}
	}
}
