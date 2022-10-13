#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: second integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
	int i, j;
	int *g;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	g = malloc(sizeof(int) * l);
	if (g == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		g[i] = min;
	}
	return (g);
}
