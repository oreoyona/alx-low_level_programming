#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main function
 * frees memory using free
 * Return: 0
 */
int main(void)
{
	dog_t *gDog;

	gDog = new_dog("Ruby", 7.1, "Gloire");
	printf("My name is %s, and I am %.1f :) - Woof!\n", gDog->name, gDog->age);
	return (0);
}
