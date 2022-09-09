#include <stdio.h>
#include <string.h>

/**
 * main function is a Simple program to write to std out a message
 * Return: 0 if the program runs without errors
*/

int main(void) 
{
	char str1[52];
	strcpy(str1, "Programming is like building a multilingual puzzle\n");
	puts(str1);
	return (0);

}
