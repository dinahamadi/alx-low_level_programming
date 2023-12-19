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
	char *buff;
	ssize_t nwrite = 0, letters = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL || *text_content == '\0')
		letters = 0;
	else
		letters = strlen(text_content);
	buff = malloc(letters + 1);
	if (buff == NULL)
	{
		close(fd);
		return (-1);
	}
	strcpy(buff, text_content);
	nwrite = write(fd, buff, letters);
	if (nwrite == -1)
	{
		free(buff);
		close(fd);
		return (-1);
	}
	free(buff);
	close(fd);
	return (nwrite);
}
