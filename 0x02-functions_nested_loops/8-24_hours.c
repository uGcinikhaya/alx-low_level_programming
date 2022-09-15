#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer starting from 00:00 to 23:59.
 *
 * Return: nothing.
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m += 1;
		}
		m += 1;
	}
}
