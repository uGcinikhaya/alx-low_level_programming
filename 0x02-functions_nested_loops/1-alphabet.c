#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lower case.
 *
 * Return: 0 means Success.
 */

void print_alphabet(void)
{

	char E;

	for (E = 'a'; E <= 'z'; E++)
	{
		_putchar(E);
	}
	_putchar('\n');
}
