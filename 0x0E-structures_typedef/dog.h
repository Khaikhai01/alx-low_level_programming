#ifndef DOG_H_FILE
#define DOG_H_FILE

#include <stdlib.h>
#include <stdio.h>

/**
 *struct dog - structure defining a dog
 *@name: dog name
 *@age: dog age
 *@owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
