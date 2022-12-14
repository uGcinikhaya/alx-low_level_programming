#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: 0 means Success.
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}
