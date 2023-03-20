#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data structure defining a dog
 * @name: The name (string) of the dog
 * @age: The age (float) of the dog
 * @owner: The owner (string) of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
