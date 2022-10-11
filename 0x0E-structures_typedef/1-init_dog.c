#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type
 * @d: st arg
 * @name: the name
 * @age: age
 * @owner: the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

