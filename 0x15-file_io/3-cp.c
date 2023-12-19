#include "main.h"
/**
 * fdclose - close a file descriptor
 * @fd: name of the file
 * Return:no return
 */
void fdclose(int fd)
{
	ssize_t nfd = 0;

	nfd = close(fd);
	if (nfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", nfd);
		exit(100);
	}
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	ssize_t fd1, fd2, nwrite = 0, nread = 0;
	char buff[1024], *file_from, *file_to;

	argc != 3 ? perror(USAGE), exit(EXIT_USAGE) : (void)NULL;
	file_from = strdup(argv[1]);
	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(EXIT_READ);
	}
	fd1 = open(file_from, O_RDONLY);
	fd1 == -1 ? free(file_from), dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", file_from), exit(EXIT_READ) : (void)
		NULL;
	file_to = strdup(argv[2]);
	file_to ? (void)NULL : free(file_from), fdclose(fd1), dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file_to), exit(EXIT_WRITE);
	fd2 = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, 0664);
	fd2 == -1 ? free(file_from), fdclose(fd1), dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file_to), free(file_to), exit(EXIT_WRITE) :
		(void)NULL;
	while ((nread = read(fd1, buff, 1024)) > 0)
	{
		nwrite = write(fd2, buff, nread);
		nwrite == -1 ? free(file_from), fdclose(fd1), dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to), free(file_to), exit(EXIT_WRITE) :
			(void)NULL;
	}
	nread == -1 ? free(file_from), fdclose(fd1), dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", file_from), exit(EXIT_READ) : (void)NULL;
	free(file_from);
	fdclose(fd1);
	fdclose(fd2);
	free(file_to);
	return (0);
}
