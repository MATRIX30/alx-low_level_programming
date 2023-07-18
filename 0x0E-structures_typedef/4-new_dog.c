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
	dog_t my_new_dog;
	dog_t *ptr = &my_new_dog;

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

	ptr->age = age;
	ptr->name = namecpy;
	ptr->owner = ownercpy;
	return (ptr);
}
