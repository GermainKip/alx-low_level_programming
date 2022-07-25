#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to add the the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int kpl, num_letters, rw;

	if (!filename)
		return (-1);

	kpl = open(filename, O_WRONLY | O_APPEND);
	if (kpl == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; ++num_letters)
			;
		rw = write(kpl, text_content, num_letters);
		if (rw == -1)
			return (-1);
	}

	close(kpl);

	return (1);
}
