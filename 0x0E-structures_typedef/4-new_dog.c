#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int n, o, p;

	newdog = malloc(sizeof(*newdog));
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;
	for (o = 0; owner[o]; o++)
		;

	newdog->name = malloc(n + 1);
	newdog->owner = malloc(o + 1);

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (p = 0; p < n; p++)
		newdog->name[p] = name[p];
	newdog->name[p] = '\0';

	newdog->age = age;

	for (p = 0; p < O; p++)
		newdog->owner[p] = owner[p];
	newdog->owner[p] = '\0';

	return (newdog);
}
