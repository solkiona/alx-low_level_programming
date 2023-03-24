#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum off all it s parameters
 * @n: argument specifier
 * @...: other possible arguments
 * Return: returns the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list hargs;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(hargs, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(hargs, int);
	}

	va_end(hargs);

	return (sum);
}
