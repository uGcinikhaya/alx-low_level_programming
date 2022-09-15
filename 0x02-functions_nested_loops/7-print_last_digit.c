#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @b: the input number to check
 *
 * Return: int.
 */

int print_last_digit(int b)
{
	b = b % 10;

	if (b < 0)
		b = -1;
	_putchar(b + '0');
	return (b);
}
