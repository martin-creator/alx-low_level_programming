#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of all command line arguments
 * @argv: array containing all command line arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
