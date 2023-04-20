#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dogs attributes
 * @name: A string for the dogs name
 * @age: An integer for the dogs age
 * @owner: A string for the owners name
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

#endif /* DOG_H */
