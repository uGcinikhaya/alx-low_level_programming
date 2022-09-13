#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine whether number is neg or pos
 *
 * Description: Variable n will have a random value
 * assigned each time program is executed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
