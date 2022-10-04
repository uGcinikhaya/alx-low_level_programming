#include "main.h"

/**
 * _pow_recursion -Returns the value of x raised to power y
 * @x: number used
 * @y: exponent used
 *
 * Return: if y < 0 return -1 else return x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}