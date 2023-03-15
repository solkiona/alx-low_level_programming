#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: destination string
 * @s2: sorce string
 * Return: returns a pointer to the destination string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *result;
	unsigned int i;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';
	return (result);

}
