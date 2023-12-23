#ifndef MAIN_H
#define MAIN_H
#define USAGE "Usage: cp file_from file_to"
#define EXIT_USAGE 97
#define EXIT_READ 98
#define EXIT_WRITE 99
#define EXIT_CLOSE 100
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
