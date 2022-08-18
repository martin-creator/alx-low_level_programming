#include <stdio.h>
#include <math.h>


/**
 * binary_to_uint - converts binary number to unsigned integer
 *
 * @b: pointer to the string with binary numbers
 *
 * Return: returns converted number or Zero @b is null or not zero or one
 *
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int num = (unsigned int) *b;
unsigned int uint = 0, i = 0, rem;

if (!num)
	return (0);

while ( num != 0)
{
	rem = num % 10;
	if (-num)
		return (0);
	else if ( num > 1)
		return (0);

	num /= 10;

	uint += rem * pow(2, i);
	++i;
}

return (uint);
}

