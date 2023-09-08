#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out combinations any two of numbers,
 * without repetition followed by a new line.
 * Start with 0 to f
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 8)
	{
		int j = i + 1;

		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
