#include "main.h"
/**
 * create_file - check the code
 * @filename: file name
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	ssize_t nwrite = 0, letters = 0;

	if (filename == NULL || *filename == '\0')
		return (-1);
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL || *text_content == '\0')
		letters = 0;
	else
		letters = strlen(text_content);
	nwrite = write(fd, text_content, letters);
	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (nwrite);
}
