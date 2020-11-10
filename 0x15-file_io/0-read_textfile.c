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
	/*check arguments*/
	if (filename)
		return (n);

	n = write(STDOUT_FILENO, filename, letters);
	if (n == -1)
		return (0);
	return (n);
}
