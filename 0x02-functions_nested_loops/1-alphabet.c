#include "main.h"

/**
 * Print_alphabet - Entry point
 *
 * Description: Prints alphabet in lower case.
 *
 * Return: 0 means Success.
 */

void print_alphabet(void)
{

	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
}
