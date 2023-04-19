#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: string input variable
 * Return: returns a pointer to a character
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	while (i < len)
	{
		*(arr + i) = *(str + i);
		i++;
	}
	arr[len] = '\0';
	return (arr);
}
