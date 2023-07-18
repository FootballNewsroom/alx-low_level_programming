#include "dog.h"

/**
 * init_dog - initializes a struct dog.
 * @d: pointer to the struct dog variable to initialize.
 * @name: name of the dog.
 * @age: agge of the dog.
 * @owner: the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(strct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
