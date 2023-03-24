#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by an new line
 * @separator: string delimeter
 * @n: total number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *num;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, char *);
		if (num == NULL)
			printf("(nil)");
		else
		{
			printf("%s", num);
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}

	}
	printf("\n");
}
