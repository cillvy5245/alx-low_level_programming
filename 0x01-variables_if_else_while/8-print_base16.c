#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int joy;
	char cillvy;

	for (joy = 0; joy < 10; joy++)
		putchar((joy % 10) + '0');

	for (cillvy = 'a'; cillvy <= 'f'; cillvy)
		putchar(cillvy);

	putchar('\n');

	return (0);
}
