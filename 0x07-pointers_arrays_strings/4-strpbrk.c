#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: string to search
 * @accept: set pf bytes to check for
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
