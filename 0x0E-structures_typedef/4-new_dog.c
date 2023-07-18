#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - main function to create new dog
* @name: name of the dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecpy;
	char *ownercpy;
	dog_t *my_new_dog;
	my_new_dog = malloc(sizeof(dog_t));

	if (my_new_dog == NULL)
	{
		return (NULL);
	}
	namecpy = malloc(strlen(name) + 1);
	if (namecpy == NULL)
	{
		return (NULL);
	}
	strcpy(namecpy, name);

	ownercpy = malloc(strlen(owner) + 1);
	if (ownercpy == NULL)
	{
		return (NULL);
	}
	strcpy(ownercpy, owner);

	my_new_dog->age = age;
	my_new_dog->name = namecpy;
	my_new_dog->owner = ownercpy;
	return (my_new_dog);
}
