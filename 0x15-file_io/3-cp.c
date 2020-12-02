#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define USAGE_ERROR 97
#define READ_ERROR 98
#define WRITE_ERROR 99
#define FD_ERROR 100
#define BUFFER_SIZE 1024

void print_error(int code, char *argument, int fd)
{
	switch (code)
	{
	case USAGE_ERROR:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(USAGE_ERROR);
		break;
	case READ_ERROR:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argument);
		exit(READ_ERROR);
		break;
	case WRITE_ERROR:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argument);
		exit(WRITE_ERROR);
		break;
	case FD_ERROR:
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd);
		exit(FD_ERROR);
		break;
	}
}

void initialize_buffer(char **buffer)
{
	int i = 0;

	*buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (*buffer == NULL)
	{
		exit(1);
	}

	for (; i < BUFFER_SIZE; i++)
		(*buffer)[i] = '\0';
}

int _strlen(char *string)
{
	int i = 0;

	for (; i < string[i]; i++)
		;
	return (i);
}

int main(int argc, char **argv)
{
	int fd_read = 0;
	int fd_write = 0;
	int characters = 1;
	char *buffer = NULL;

	if (argc != 3)
		print_error(USAGE_ERROR, NULL, 0);

	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
		print_error(READ_ERROR, argv[1], 0);

	fd_write = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_read == -1)
		print_error(WRITE_ERROR, argv[2], 0);

	initialize_buffer(&buffer);

	while (characters > 0)
	{
		characters = read(fd_read, buffer, BUFFER_SIZE - 1);
		write(fd_write, buffer, characters);
		free(buffer);
		initialize_buffer(&buffer);
	}

	free(buffer);
	if (close(fd_read) == -1)
		print_error(FD_ERROR, NULL, fd_read);
	if (close(fd_write) == -1)
		print_error(FD_ERROR, NULL, fd_write);
	return (0);
}
