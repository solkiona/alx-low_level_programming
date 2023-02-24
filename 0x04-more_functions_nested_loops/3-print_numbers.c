#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * _putchar - writes result to console
 * Return: Always 0 if succesful
 */
void print_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
