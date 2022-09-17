#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints numbers 1 - 100, replacing multiples of
 * 3 with Fizz and multiples of 5 with Buzz and multiples of
 * both with FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	for (int i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("Fizz Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
