#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half a string
 *
 * @str: input string to print
 * Description: prints half of string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (*(str + i) != '\0')
		i += 1;
	n = i / 2;
	if (i % 2 == 1)
		n += 1;
	while (*(str + n) != '\0')
	{
		putchar(*(str + n));
		n++;
	}
	putchar('\n');
}
