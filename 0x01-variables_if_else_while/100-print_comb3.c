#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, space.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int cillvy1, cillvy2;

	for (cillvy1 = 0; cillvy1 < 9; cillvy1++)
	{
		for (cillvy2 = cillvy1 + 1; cillvy2 < 10; cillvy2++)
		{
			putchar((cillvy1 % 10) + '0');
			putchar((cillvy2 % 10) + '0');

			if (cillvy1 == 8 && cillvy2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

