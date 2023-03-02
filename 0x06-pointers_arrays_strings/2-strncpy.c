#include "main.h"

/**
 * _strncpy - writes a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum size of destination buffer
 * Return: returns destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && *src != '\0'; i++)
{
*dest++ = *src++;
}
for (; i < n; i++)
{
*dest++ = '\0';
}
return (dest);
}
