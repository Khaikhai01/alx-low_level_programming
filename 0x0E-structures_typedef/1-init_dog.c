#include "dog.h"

/**
 *init_dog - initializes a structure of type dog
 *@d: pointer to the structure
 *@name: pointer to the name of the dog
 *@age: dog's age
 *@owner: pointer to the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
