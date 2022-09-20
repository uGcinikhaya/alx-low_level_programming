#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: first int
 * @b: second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int cnn;

	cnn = *a;
	*a = *b;
	*b = cnn;
}
