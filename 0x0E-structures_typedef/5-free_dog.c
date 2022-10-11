#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees memory using free
 * @d: our ds
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}

