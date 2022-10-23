#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between two strings.
 * @n: number of strings passed to the function.
 *
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
/* i can be 0 or i is less than n or i goes up by 1*/
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(n[1]");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
