#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array
 * @size:size of array in bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	for (unsigned int i = 0; i < nmemb * size; ++i)
		result[i] = 0;
	return (result);
}
