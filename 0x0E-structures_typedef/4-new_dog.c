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
	d_name = name;
	if (d_name == NULL)
	{
		free(d);
		return (NULL);
	}
	d_owner = owner;
	if (d_owner == NULL)
	{
		free(d_name);
		free(d);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
