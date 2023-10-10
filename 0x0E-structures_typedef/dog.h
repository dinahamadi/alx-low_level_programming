#ifndef main_h
#define main_h
#include <stdio.h>
/**
 * struct dog - a new type that has dogs informations
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner name
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog* d, char* name, float age, char* owner);
void print_dog(struct dog* d);
dog_t* new_dog(char* name, float age, char* owner);
void free_dog(dog_t* d);

#endif
