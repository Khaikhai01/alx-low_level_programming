#include "dog.h"

/**
 *new_dog - created a new dog
 *@name: pointer to dog's name
 *@age: dog age
 *@owner: pointer to owner
 *Return: returns NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s_dog;
	int i, cpName, cpOwner;

	s_dog = malloc(sizeof(*s_dog));
	if (s_dog == NULL || !(name) || !(owner))
	{
		free(s_dog);
		return (NULL);
	}

	for (cpName = 0; name[cpName]; cpName++)
		;
	for (cpOwner = 0; owner[cpOwner]; cpOwner++)
		;

	s_dog->name = malloc(cpName + 1);
	s_dog->owner = malloc(cpOwner + 1);

	if (!(s_dog->name) || !(s_dog->owner))
	{
		free(s_dog->owner);
		free(s_dog->name);
		free(s_dog);
		return (NULL);
	}

	for (i = 0; i < cpName; i++)
		s_dog->name[i] = name[i];
	s_dog->name[i] = '\0';

	s_dog->age = age;

	for (i = 0; i < cpOwner; i++)
		s_dog->owner[i] = owner[i];
	s_dog->owner[i] = '\0';

	return (s_dog);
}
