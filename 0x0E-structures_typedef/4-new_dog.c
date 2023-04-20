#include "dog.h"
#include <stdlib.h>

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
 * _strcpy - copies a source string to a destination
 * @src: input source string
 * Return: Returns a pointer to the string copied
 */
char *_strcpy(char *src)
{
	int len = 0;
	int j = 0;
	char *dest;

	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	for (j = 0; src[j]; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
