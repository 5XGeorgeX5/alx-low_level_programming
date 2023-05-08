#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: The file
 * @letters: The number of letters
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, len, x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	x = read(fd, buffer, letters);
	len = write(STDOUT_FILENO, buffer, x);
	free(buffer);
	close(fd);
	return (len);
