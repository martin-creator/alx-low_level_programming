#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: return either 1 success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int ftp;
	int numberLetters;
	int writtenLetters;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ftp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numberLetters = 0; text_content[numberLetters]; numberLetters++)
		;

	writtenLetters = write(ftp, text_content, numberLetters);

	if (writtenLetters == -1)
		return (-1);

	close(ftp);

	return (1);
}
