#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: numbers of letters to read and prin
 *
 * Return: number of letters it could read and print,
 * 0 if file cannot be opened or read of if filename is NULL
 * or if write does not write expected number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int kpl;
	ssize_t r, u;
	char *buffer;

	if (!filename)
		return (0);

	kpl = open(filename, O_RDONLY);
	if (kpl == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(kpl, buffer, letters);
	u = write(STDOUT_FILENO, buffer, r);

	close(kpl);
	free(buffer);

	return (u);
}
