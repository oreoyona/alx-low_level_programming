#include "dog.h"
/**
 * init_dog -  initialize a variable of type
 * @d: st arg
 * @name: the name
 * @age: age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = {.name = name, .age = age, .owner = owner};
}

