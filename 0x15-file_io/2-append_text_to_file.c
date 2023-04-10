#include "main.h"

/**
 * _strlen - find the length of string
 * @str: string
 * Return: lenght
 *
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);

}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 on success
 *	  -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, write_count;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (!text_content)
	{
		close(file_desc);
		return (1);
	}

	write_count = write(file_desc, text_content, _strlen(text_content));
	if (write_count == -1 || write_count != _strlen(text_content))
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}
