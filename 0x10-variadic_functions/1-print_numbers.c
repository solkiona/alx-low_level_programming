#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints the parameters of a funtion
 * @separator: delimeter for the arguments
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int num;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
