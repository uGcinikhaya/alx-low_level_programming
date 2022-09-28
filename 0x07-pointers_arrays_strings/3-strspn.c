#include "main.h"

/**
 * _strspn - function that gets length of substring.
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes in s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, exit;

	for (i = 0; s[i] != '\0'; i++)
	{
		exit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				exit = 1;
			}
		}
		if (exit == 0)
		{
			return (i);
		}
	}
	return (i);
}
