#ifndef main_h
#define main_h
#include <stdio.h>
#include <stddef.h>
/**
 * struct dog - a new type that has dogs informations
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
