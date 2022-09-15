#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural nnumbers from n to 98
 * @n: input number to check
 * Result: nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

