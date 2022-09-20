#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int box = 0;
	char ltemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (box < i)
	{
		ltemp = s[i];
		s[i] = s[box];
		s[box] = ltemp;
		box++;
		i--;
	}
}
