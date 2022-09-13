#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet letters in reverse.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 123;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
