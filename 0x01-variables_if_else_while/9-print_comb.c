#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int joy;

	for (joy = 0; joy <= 9; joy++)
	{
		putchar((joy % 10) + '0');
		if (joy == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
