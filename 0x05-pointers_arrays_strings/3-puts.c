#include "main.h"

/**
 * _puts - prints a string.
 * @str: input string to print
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str = i) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}

	putchar(10);
}
