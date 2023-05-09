#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Read a text file and print POSIX stdout
 * @filename: char string of file name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read, write;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	read = read(fd, buff, letters);
	if (read == -1)
		return (0);

	write = write(STDOUT_FILENO, buff, read);
	if (write == -1 || read !=  write)
		return (0);
	free(buff);

	close(fd);
	return (write);
}
