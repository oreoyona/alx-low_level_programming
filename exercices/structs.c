#include <stdio.h>
#include <stdlib.h>
#define TRUE 3
#define D_SIZE 3
/**
 * person - object to built a person
 * @name: name
 * @age: the age
 * @f: favorites things
 */
typedef struct person{
	char *name;
	int age;
	char *f[D_SIZE];
}person;

/**
 * p_node - ll of persons
 * @id: id of the person
 * @content: value
 * @next: the next person in the list
 */
typedef struct p_node{
	int id;
	person content;
	struct p_node *next;
}pnt;

/**
 * main - entry point of the program
 * Return: void
 */
int main()
{

	return (TRUE);
}
