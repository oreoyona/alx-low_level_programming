#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char *argv)
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;
	char cmd[] = {"ls"};;
	char *avc;
	int i;
	char *avenv = {NULL};
	char str[] = "";
	// Returns first token
	char* token;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	printf("%s\n", " Welcome to my simple shell");
	printf("%s\n", "=======================================");
	printf("%s", "$");
	characters = getline(&buffer,&bufsize,stdin);

	token = strtok(buffer, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
        token = strtok(NULL, " ");
	}

	return(0);
}
