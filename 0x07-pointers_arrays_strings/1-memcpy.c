#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory is copied to
 * @src: source area memory is copied from
 * @n: number of bytes to be copied
 * Return: pointer to copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
