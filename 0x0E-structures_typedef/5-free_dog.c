#include "dog.h"

/**
 * free_dog - Frees memory allocated for struct dog
 * @d: Pointer to struct dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
