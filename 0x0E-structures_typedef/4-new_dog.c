#include "dog.h"

/**
 * new_dog - Creates a new dog (struct dog_t)
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;
	char *n_name;
	char *n_owner;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	n_name = strdup(name);
	if (!n_name)
	{
		free(dog);
		return (NULL);
	}
	n_owner = strdup(owner);
	if (!n_owner)
	{
		free(n_name);
		free(dog);
		return (NULL);
	}
	dog->name = n_name;
	dog->age = age;
	dog->owner = n_owner;
	return (dog);
}
