#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * and returns 1
 *
 * @c: c is an ascii char, to check for
 * alphabetic character
 *
 * Return: 1 if alphabetic character,
 *  0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
