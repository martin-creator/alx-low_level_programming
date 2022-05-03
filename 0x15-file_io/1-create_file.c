#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename
 * 
 * @text_content: content written in the file
 *
 * Return: returns either 1 on success or -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
int ftp;
int numLetters , writtenLetters;

if (!filename)
{
	return (-1);
}

ftp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (ftp == -1)
{
	return (-1);
}

if (!text_content)
{
	return (-1);
}

for (numLetters = 0; text_content[numLetters]; numLetters++)
	;

writtenLetters = write(ftp, text_content, numLetters);

if (writtenLetters == -1)
{
	return (-1);
}

close(ftp);

return (1);

}

