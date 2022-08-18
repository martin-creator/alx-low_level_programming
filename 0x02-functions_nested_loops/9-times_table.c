#include "main.h"

/**
 * times_table - prints 9x9 times table
 * Return: void
 */

void times_table(void)
{
	int x, y, t, o, m;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			m = x * y;
			t = m / 10;
			o = m % 10;
			if (y == 0)
			{
				_putchar(m + '0');
			}
			else if (t > 0)
			{
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			if (y < 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
