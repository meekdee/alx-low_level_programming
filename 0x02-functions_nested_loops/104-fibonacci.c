#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, separated by commas.
 * Starts with 1 and 2.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long num1 = 1, num2 = 2, i = 2, sum;

	printf("%lu, %lu", num1, num2);
	while (i < 98)
	{
		sum = num1 + num2;
		printf(", %lu", sum);
		num1 = num2;
		num2 = sum;
		i++;
	}

	printf("\n");

	return (0);
}
