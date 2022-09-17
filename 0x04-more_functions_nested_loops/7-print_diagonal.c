#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that prints diagonal line
 * @n: input to be checked
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(92);
			i += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
