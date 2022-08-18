#include "main.h"
/**
 * print_last_digit - prints last digit of int z
 * @z: int to print
 * Return: last digit
 */

int print_last_digit(int z)
{
	int a = z % 10;

	if (a >= 0)
	{
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar((a * -1) + '0');
		return (a * -1);
	}
}
