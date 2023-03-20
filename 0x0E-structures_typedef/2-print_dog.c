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

	printf("Name: ");
	d->name ? printf("%s\n", d->name) : printf("(nil)\n");
	
	printf("Age: %f\n", d->age);
	
	printf("Owner: ");
	d->owner ? printf("%s\n", d->owner) : printf("(nil)\n");
}
