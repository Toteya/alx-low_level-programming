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

	if (!name || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}
	return (dog);
}
