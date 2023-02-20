#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *	separated by a comma
 *	followed by a space.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int joy1, joy2;

	for (joy1 = 0; joy1 <= 98; joy1++)
	{
		for (joy2 = joy1 + 1; joy2 <= 99; joy2++)
		{
			putchar((joy1 / 10) + '0');
			putchar((joy1 % 10) + '0');
			putchar(' ');
			putchar((joy2 / 10) + '0');
			putchar((joy2 % 10) + '0');

			if (joy1 == 98 && joy2 == 99)
				continue;


			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

