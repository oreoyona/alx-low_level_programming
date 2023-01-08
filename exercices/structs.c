#include <stdio.h>
#include <stdlib.h>
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
	p_node *next;
}pnt;

/**
 * main - entry point of the program
 * Return: void
 */
int main()
{
	int i;
	pnt *h, *h1, *runner;
	person *gloire, *meghan;
	gloire->name = "Gloir";
	gloire->age = 26;
	gloire->f[0] = "A";
	gloire->f[1] = "B";
	gloire->f[2] = "C";

	meghan->name = "Megha";
	meghan->age = 41;
	meghan->f[0] = "D";
	meghan->f[1] = "E";
	meghan->f[2] = "F";
	

	h->id = 1;
	h->content = *gloire;
	h->next = NULL;

	h1->id = 2;
	h1->content = *meghan;
	h1->next = h;
	
	runner = h1;

	while(runner != NULL)
	{
		printf("[%s->id:%d]\n", runner->content->name, runner->id);
		runner = runner->next;
		i++;
	}
	printf("Nombre de noeuds:%d\n", i);
	return (0);
}
