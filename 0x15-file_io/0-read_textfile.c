#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if
		(filename == NULL)
		{
			return (0);
		}
	FILE *fp = fopen(filename, "r");

	if
		(fp == NULL)
		{
			return (0);
		}
	char *buff = (char *) malloc(sizeof(char) * letters);

	if
		(buff == NULL)
		{
			fclose(fp);
			return (0);
		}
	ssize_t read = fread(buff, sizeof(char), letters, fp);

	if
		(read == -1)
		{
			fclose(fp);
			free(buff);
			return (0);
		}
	ssize_t written = write(STDOUT_FILENO, buff, read);

	if
		(written == -1 || written != read)
		{
			fclose(fp);
			free(buff);
			return (0);
		}
	fclose(fp);
	free(buff);
	return (written);
}
