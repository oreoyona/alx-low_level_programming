#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Auth: Gloire K. Chabu
 * Desc: A simple desc
 */

/**
 * struct dog - here we define a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the do
 * The dog struct describes the elements
 * that must be present to every single dog in our program
 */
struct dog
{
	char *name;
	float age;
	/**
	 * @owner: this is a long description of the owner member
	 */
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
