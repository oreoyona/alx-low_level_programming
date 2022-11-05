#include <stdlib.h>
#include <stdio.h>
/**
 * main - read from stdin 
 * and outputs to stdout
 * Return: 0
 */
int main(void)
{
	char *ipt;
	size_t num, ch;

	num = 32;
	ipt = (char *)malloc(num * sizeof(char));

	if (ipt == NULL)
		exit(-1);
	printf("%s\n", "type somethig");
	ch = getline(&ipt, &num, stdin);
	printf("you wrote %s\n", ipt);

	return (0);
}
