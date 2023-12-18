#include "main.h"
/**
 * read_textfile - check the code
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read and print
 * or 0 if an eror is occured.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	int nwrite = 0;
	int nread = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	nread = read(fd, buff, letters);
	if (nread == -1)
	{
		free(buff);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buff, nread);
	if ((size_t)nwrite != letters || nwrite == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (nread);
}
