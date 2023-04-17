#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @do: struct dog to free
 */
void free_dog(dog_t *do)
{
	if (do)
	{
		free(do->name);
		free(do->owner);
		free(do);
	}
}

