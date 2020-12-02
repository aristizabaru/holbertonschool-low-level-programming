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

/**
 * print_error - prints erros
 * @code: code of error to be printed
 * @argument: argmument to be printed if needed
 * @fd: file descriptor to be printed if needed
 */
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(FD_ERROR);
		break;
	}
}

/**
 * initialize_buffer - create a buffer of BUFFER_SIZE bytes
 * @buffer: string to allocated
 * Description: Allocate memory for a buffer of size BUFFER_SIZE
 * and filled with \0
 */
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

/**
 * _strlen - gets the number of characters of a string
 * @string: string to be counted by chars
 *
 * Return: number of characters on succes, -1 on failure;
 */
int _strlen(char *string)
{
	int i = 0;

	if (string == NULL)
		return (-1);

	for (; i < string[i]; i++)
		;
	return (i);
}

/**
 * main - write information from a file to another
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 on succes, -1 on failure
 */
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
	fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_read == -1)
		print_error(WRITE_ERROR, argv[2], 0);
	initialize_buffer(&buffer);
	while (characters > 0)
	{
		characters = read(fd_read, buffer, BUFFER_SIZE);
		if (characters == -1)
		{
			free(buffer);
			print_error(READ_ERROR, argv[1], 0);
		}
		else if (characters == 0)
			break;
		if (write(fd_write, buffer, characters) == -1)
		{
			free(buffer);
			print_error(WRITE_ERROR, argv[2], 0);
		}
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
