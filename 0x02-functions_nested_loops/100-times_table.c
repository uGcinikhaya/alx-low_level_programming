#include "main.h"

/**
 * print_times_table - prints the times table
 * @g: integer for which the times table will print in
 * Return: nothing.
 */

void print_times_table(int g)
{
	int row, col;
	int mult = 0;

	if (g >= 0 && g <= 15)
	{
		for (row = 0; row <= g; row++)
		{
			for (col = 0; col <= g; col++)
			{

				mult = (row * col);
				if (mult < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (col != g)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
