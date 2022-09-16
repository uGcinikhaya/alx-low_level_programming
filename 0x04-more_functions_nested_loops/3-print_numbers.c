#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n = 0;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	_putchar(10);
}
