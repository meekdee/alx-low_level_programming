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

	while (i <= 7)
	{
		int j = i + 1;

		while (j <= 8)
		{
			int k = j + 1;

			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
