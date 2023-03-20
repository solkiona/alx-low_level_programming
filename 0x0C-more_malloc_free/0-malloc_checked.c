#include "main.h"

/**
 * malloc_checked - a function that allocates memeory using malloc
 * @b: input integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
