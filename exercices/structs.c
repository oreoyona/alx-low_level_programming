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
	person next;
}pnt;

/**
 * main - entry point of the program
 * Return: void
 */
int main()
{
	int i;
	pnt runner;
	person gloire = {name="Gloire", age=26, f=["movies", "food", "books"]};
	person meghan = {name="Meghan", age=41, f=["H", "Archie", "Lili"]};
	person harry = {name="Henry",age=38, f=["F", "Army", "Duty"]};
	pnt h = {id=1,content=gloire, next=NULL};
	pnt h1 = {id=0, content=meghan, next=h};
	pnt h2 = {id=2, conent=harry, next=h1};
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
