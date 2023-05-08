#include "main.h"

/**
 * _buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(1024);
	if (!buffer)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv: the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd1 == -1 || r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(fd2, buffer, r);
		if (fd2 == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(fd1, buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
