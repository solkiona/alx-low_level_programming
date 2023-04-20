#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * new_dog - creates a new dog
 * @name: input name
 * @age: age
 * @owner: owner
 * Return: returns a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name;
	char *d_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d_name = _strcpy(name);
	if (d_name == NULL)
	{
		free(d);
		return (NULL);
	}
	d_owner = _strcpy(owner);
	if (d_owner == NULL)
	{
		free(d_name);
		free(d);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

/**
 * _strlen - Calculates the length of a string
 * @s: string
 * Descripion: Calculates the lenght of a string
 * Return: An integer representing the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{}

	return (len);
}

/**
 * _strcpy - copies a source string to a destination
 * @src: input source string
 * Return: Returns a pointer to the string copied
 */
char *_strcpy(char *src)
{
	int len;
	int j = 0;
	char *dest;

	len = _strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
