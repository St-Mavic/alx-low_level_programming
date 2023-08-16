#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates new dog.
 * @name: name parameter.
 * @age: age parameter.
 * @owner: owner of the dog.
 *
 * Return: new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, new_name, new_owner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (new_name = 0; name[new_name]; new_name++)
		;

	for (new_owner = 0; owner[new_owner]; new_owner++)
		;

	p_dog->name = malloc(new_name + 1);
	p_dog->owner = malloc(new_owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < new_name; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < new_owner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
