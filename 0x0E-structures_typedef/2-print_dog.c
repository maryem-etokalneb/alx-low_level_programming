#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @do: struct dog to print
 */
void print_dog(struct dog *do)
{
	if (do == NULL)
		return;

	if (do->name == NULL)
		do->name = "(nil)";
	if (do->owner == NULL)
		do->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", do->name, do->age, do->owner);
}

