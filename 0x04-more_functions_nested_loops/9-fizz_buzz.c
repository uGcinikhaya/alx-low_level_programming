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
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");
		else if (num == 100)
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
