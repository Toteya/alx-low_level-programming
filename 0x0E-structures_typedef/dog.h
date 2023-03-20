#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data structure defining a dog
 * @name: The name (string) of the dog
 * @age: The age (float) of the dog
 * @owner: The owner (string) of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Libraries */
#include <stdio.h>
#include <string.h>

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
