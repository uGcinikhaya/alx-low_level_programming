#include "main.h"
#include <stdio.h>

/**
 * print_line - function that prints a line
 * @n: input value thats checked
 * Return: nothing.
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(95);
			i += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
