#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to the struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
