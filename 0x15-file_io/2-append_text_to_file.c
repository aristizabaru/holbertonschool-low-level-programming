#include "holberton.h"

/**
 * create_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result = 1, fd = 0, i = 0, length = 0;

	/*check parameters*/
	if (filename == NULL)
	{
		result = -1;
		return (result);
	}
	/*open file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		result = -1;
		return (result);
	}
	/*fill content to file*/
	if (text_content && fd > 0)
	{
		/*find string lenght*/
		while (text_content[i])
			i++;
		/*write text into file*/
		length = write(fd, text_content, i);
		if (length != i)
			result = -1;
	}

	/*close File Descriptor*/
	return (result);
}
