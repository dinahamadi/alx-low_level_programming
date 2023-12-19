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
	char buff[1024];

	argc != 3 ? perror(USAGE), exit(EXIT_USAGE) : (void)NULL;
	fd1 = open(argv[1], O_RDONLY);
	fd1 == -1 ? dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), exit(EXIT_READ) : (void)NULL;
	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	fd2 == -1 ? fdclose(fd1), dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
		, argv[2]), exit(EXIT_WRITE) : (void)NULL;
	while ((nread = read(fd1, buff, 1024)) > 0)
	{
		nwrite = write(fd2, buff, nread);
		nwrite == -1 ? fdclose(fd1), dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[1]), exit(EXIT_WRITE) : (void)NULL;
	}
	nread == -1 ? fdclose(fd1), dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]), exit(EXIT_READ) : (void)NULL;
	fdclose(fd1);
	fdclose(fd2);
	return (0);
}
