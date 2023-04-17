#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @do: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *do, char *name, float age, char *owner)
{
	if (do == NULL)
		do = malloc(sizeof(struct dog));
	do->name = name;
	do->age = age;
	do->owner = owner;
}

