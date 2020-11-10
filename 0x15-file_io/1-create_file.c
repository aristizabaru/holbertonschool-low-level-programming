#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: new file name
 * @text_content: string to fill the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int result = 1, fd = 0, i = 0, length = 0;

	/*check for file name and string*/
	if (filename == NULL)
	{
		result = -1;
		return (result);
	}
	/*create file with permissions if tis new*/
	/*truncate file to 0 chars*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		result = -1;
		return (result);
	}
	/*check if there's a string*/
	if (text_content)
	{
		/*find string lenght*/
		while (text_content[i])
			i++;
		/*write text into file*/
		length = write(fd, text_content, i);
		if (length != i)
			result = -1;
	}
	close(fd);
	return (result);
}
