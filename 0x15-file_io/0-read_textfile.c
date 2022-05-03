#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: filename
 *
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed. If it fails, returns 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fpt;
ssize_t lettersWritten, lettersRead;
char *buf;

if (!filename)
{
	return (0);
}

fpt = open(filename, O_RDONLY);

if (fpt == -1)
{
	return (0);
}

buf = malloc(sizeof(char) * (letters));
if (!buf)
{
	return (0);
}

lettersRead = read(fpt, buf, letters);
lettersWritten = write(STDOUT_FILENO, buf, lettersRead);

close(fpt);

free(buf);

return (lettersWritten);

}
