#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: NULL if the function fails
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

	for (k = 0; k < j; ppp++)
		newdog->owner[k] = owner[k];
	newdog->owner[k] = '\0';

	return (newdog);
}
