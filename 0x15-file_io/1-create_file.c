#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: null terminated string to write to the file
 * if the file exists, truncate it. Create the file with rw permissions
 * dont change file permissions if it exists already
 * 
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int kpl;
	int num_letters;
	int rw;

	if (!filename)
		return (-1);

	kpl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (kpl == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (num_letters = 0; text_content[num_letters]; ++num_letters)
		;
	rw = write(kpl, text_content, num_letters);
	if (rw == -1)
		return (-1);

	close(kpl);

	return (1);
}
