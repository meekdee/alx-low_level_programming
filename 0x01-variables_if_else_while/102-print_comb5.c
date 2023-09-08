#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out combinations any three numbers,
 * without repetition followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 99)
	{
		j = i;

		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			putchar(' ');

			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 99 || j != 99)
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
