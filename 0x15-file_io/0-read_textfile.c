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
	size_t n = 0;
	int fd = 0;
	char buff[1024];

	/*check for file*/
	if (filename == NULL)
		return (n);
	/*open or create file*/
	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (n);
	/*read file into buffer*/
	n = read(fd, buff, letters);
	/*print file with chars passed*/
	n = write(STDOUT_FILENO, buff, n);
	if (n < letters)
		n = 0;
	/*close table entry for file descriptor*/
	close(fd);
	return (n);
}
