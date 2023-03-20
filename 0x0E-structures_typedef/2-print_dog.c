#include "dog.h"

/**
 * print_dog - Prints the members of a struct dog
 * @d: Pointer to the struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
}
