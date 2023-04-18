#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creating a new dog
 * @name: the name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: returns NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(name) + 1);
	if (!my_dog->name)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(owner) + 1);
	if (!my_dog->owner)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';
	my_dog->age = age;

	for (i = 0; owner[i]; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';

	return (my_dog);

}
