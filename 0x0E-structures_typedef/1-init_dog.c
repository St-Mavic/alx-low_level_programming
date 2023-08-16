#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function
 * @d: dog object
 * @age: age parameter
 * @owner: last parameter
 * @name: name value
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
