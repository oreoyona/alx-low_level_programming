#include <stdio.h>

int main(int argc, char *argv[])
{
	int my_pid;
	int pid;
	
	my_pid = getpid();
	pid = getppid();
	printf("the process id is: %d\n", my_pid);
	printf("the parent id is: %d\n", pid);
	
	return (0);
}
