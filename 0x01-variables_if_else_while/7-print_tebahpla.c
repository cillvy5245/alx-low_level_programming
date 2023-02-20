#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char cillvy;

	for (cillvy = 'z'; cillvy >= 'a'; cillvy--)
		putchar(cillvy);

	putchar('\n');

	return (0);
}
