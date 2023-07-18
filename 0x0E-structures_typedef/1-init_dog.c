#include "dog.h"
#include <stdio.h>

/**
* init_dog - main function
* @d: param
* @name: param
* @age: param
* @owner: param
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
