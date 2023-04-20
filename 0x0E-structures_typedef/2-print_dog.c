#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - writes a function that prints a struct dog
 * @d: new struct dog d
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);

}
