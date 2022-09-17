#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws diagonal line
 * @n: input to be checked
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a, b;

	for (b = 1; b <= n; b++)
	{
		for (a = 1; a < b; a++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
