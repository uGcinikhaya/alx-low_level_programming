#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 *
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int bic = 0;

	while (*(src + bic) != '\0')
	{
		*(dest + bic) = *(src + bic);
		bic++;
	}
	*(dest + bic) = '\0';

	return (dest);
}
