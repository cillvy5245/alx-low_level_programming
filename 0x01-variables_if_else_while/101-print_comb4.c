#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order,
 * separated by a comma followed by a space.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int cillvy1, cillvy2, cillvy3;

	for (cillvy1 = 0; cillvy1 < 8; cillvy1++)
	{
		for (cillvy2 = cillvy1 + 1; cillvy2 < 9; cillvy2++)
		{
			for (cillvy3 = cillvy2 + 1; cillvy3 < 10; cillvy3++)
			{
				putchar((cillvy1 % 10) + '0');
				putchar((cillvy2 % 10) + '0');
				putchar((cillvy3 % 10) + '0');

				if (cillvy1 == 7 && cillvy2 == 8 && cillvy3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
