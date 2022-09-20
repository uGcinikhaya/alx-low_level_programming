#include "main.h"

/**
 * _puts - prints a string.
 * @str: input string to print
 * Description: prrints a string
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}

	putchar(10);
}
