#include "main.h"
#include <stdio.h>

int square(int n, int s);

/**
 * square is the base function
 * _sqrt_recursion - get the natural square root of a number
 * @n: is the natural number
 * Return: The natural square root
 * function that returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
return (square(n, 0));
}

/**
 * @s: is a counter
 * Return: The sqrt of a natural number
 * If n does not have a natural square root, the function should return -1
 */

int square(int n, int s)
{

if (s * s == n)
return (s);

else if (s * s > n)
return (-1);

else
return (square(n, s + 1));

}
