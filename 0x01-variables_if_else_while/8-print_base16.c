#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the numbers with base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
