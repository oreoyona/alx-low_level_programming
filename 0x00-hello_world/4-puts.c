#include <stdio.h>
#include <string.h>
/*
 *A Simple program to write to std out a message
*/

int main(void)
{
  char str[52];
  strcpy(str, "Programming is like building a multilingual puzzle\n");
  puts(str);
  return (0);

}
