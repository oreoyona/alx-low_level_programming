#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: the xontent
 * Return: 1 on success, 
 * -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, x = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o < 0)
		return (-1);

	while (text_content && *(text_content + x))
		x++;

	w = write(o, text_content, x);
	close(o);
	if (w < 0)
		return (-1);
	return (1);
}
