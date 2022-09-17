#include "main.h"
#include <stdio.h>

/**
 * print_square -nfunction that draws a square
 * @size: dimentions of square
 * Return: nothing.
 */

void print_square(int size)
{
	int a, b;

	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
