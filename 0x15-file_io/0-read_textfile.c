#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: it is pretty obvious
 * @letters: number of letters to read
 * Return: an int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *x;

	if (filename == NULL)
		return (0);
	x = malloc(sizeof(char) * letters);
	if (x == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o < 0)
	{
		free(x);
		return (0);
	}

	r = read(o, x, letters);
	if (r < 0)
	{
		free(x);
		return (0);
	}

	w = write(STDOUT_FILENO, x, r);
	free(x);
	close(o);

	if (w < 0)
		return (0);
	return ((ssize_t)w);
}
