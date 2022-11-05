#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end to the  file
 * @filename: The name of the file
 * @text_content: The content
 * Return: 1 on success
 * -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, x = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_APPEND);
	if (o < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(o);
		return (1);
	}

	while (*(text_content + x))
		x++;

	w = write(o, text_content, x);
	close(o);
	if (w < 0)
		return (-1);

	return (1);
}
