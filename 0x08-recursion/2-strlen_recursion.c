#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s - is a pointer to the string
 * Return 0;
 */

int _strlen_recursion(char *s)
{

int total = 0;

if (*s != '\0')
{
	total++;
	
	_strlen_recursion(s + 1);
}
else
{
	return (0);
}

return (total);

}
