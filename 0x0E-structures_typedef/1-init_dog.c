#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a struct dog
 * @d: pointer to a struct dog
 * @name: name of dog as string
 * @age: age of dog as float
 * @owner: name of owner as string
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

