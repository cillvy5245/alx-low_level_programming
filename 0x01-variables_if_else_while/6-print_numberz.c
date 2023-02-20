#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int joy;

	for (joy = 0; joy < 10; joy++)
		putchar((joy % 10) + '0');

	putchar('\n');

	return (0);
}
