#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *f;
}person;

/**
 * p_node - ll of persons
 * @id: id of the person
 * @content: value
 * @next: the next person in the list
 */
typedef struct p_node{
	int id;
	person *content;
	struct p_node *next;
}p_node;
/**
 * gen - generates a unique id
 * @str: the name of the person
 * Return: the id
 */
int gen(char *str)
{
	int i, length, code;

	length = strlen(str);
	code = 0;

	for (i = 0; i < length; i++)
		code += str[i];
	return (code);
}

/** 
 * init - creates a ll of 1 node
 * @head: pointer to the head of the ll
 * Return: p_node
 */
p_node *init(person *ob)
{
	p_node *head;
	
	if(!ob)
		return (NULL);
	head->id = gen(ob->name);
	head->content = NULL;
	head->next = NULL;
	
	return (head);
}
/**
 * main - entry point of the program
 * Return: void
 */
int main()
{
	person *gloire;
	p_node *head;

	gloire->name="Gloir";
	gloire->age=26;
	gloire->f = "A B C ";
	head = init(gloire);
	if (head) printf("Success\n");
	else printf("Failed\n");

	return (TRUE);
}
