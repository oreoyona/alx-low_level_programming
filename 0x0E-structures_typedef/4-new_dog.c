#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: in ear or month
 * @owner: a human or a state
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_bis, *owner_bis;
	int namel = 0, ownerl = 0;
	int x;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[namel])
		namel++;
	while (owner[ownerl])
		ownerl++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_bis = malloc(namel + 1);
	if (name_bis == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		name_bis[x] = name[x];
	name_bis[x] = '\0';
	owner_bis = malloc(ownerl + 1);
	if (owner_bis == NULL)
		return (NULL);
	for (x = 0; owner[x]; x++)
		owner_bis[x] = owner[x];
	owner_bis[x] = '\0';
	new_dog->name = name_bis;
	new_dog->age = age;
	new_dog->owner = owner_bis;
	return (new_dog);
}
