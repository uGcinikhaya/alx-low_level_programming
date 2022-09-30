#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime number
 * otherwise returns 0
 * @n: input number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrim(n, 2));
}

/**
 * getNumPrim - function that gets if the num is 0 or 1
 * @num: input number
 * @i: counter variable
 *
 * Return: int
 */

int getNumPrim(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (getNumPrim(num, i + 1));
}
