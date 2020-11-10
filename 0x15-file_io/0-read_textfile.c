#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to be read
 * @letters:  number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t lenght = 0, final_length = 0;
	int fd = 0;
	char *buff = NULL;

	/*check for file*/
	if (filename == NULL)
		return (lenght);
	/*open or create file*/
	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (lenght);
	/*create space in memory for file*/
	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (lenght);
	/*read file into buffer*/
	lenght = read(fd, buff, letters);
	/*print file with chars passed*/
	final_length = write(STDOUT_FILENO, buff, lenght);
	if (final_length != lenght)
		lenght = 0;
	/*cierro table entry for file descriptor*/
	close(fd);
	free(buff);
	return (lenght);
}
