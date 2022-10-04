#include <stdio.h>
#include "main.h"

/**
 * main - prints the programs name
 * @argc: number of arguments that are passed in function
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
