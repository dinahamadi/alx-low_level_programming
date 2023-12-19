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
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	ssize_t fd1, fd2;
	ssize_t nwrite = 0, nread = 0;
	char buff[1024];
	char *file_from, *file_to;


	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = strdup(argv[1]);
	if (file_from == NULL || *file_from == '\0')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		free(file_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	nread = read(fd1, buff, 1024);
	if (nread == -1)
	{
		free(file_from);
		fdclose(fd1);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_to = strdup(argv[2]);
	if (file_to == NULL || *file_to == '\0')
	{
		free(file_from);
		fdclose(fd1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fd2 = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		free(file_from);
		fdclose(fd1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(file_to);
		exit(99);
	}
	nwrite = write(fd2, buff, nread);
	if (nwrite == -1)
	{
		free(file_from);
		fdclose(fd1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(file_to);
		exit(99);
	}
	return (0);
}
