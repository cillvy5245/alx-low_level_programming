#include "main.h"

/**
  * print_alphabet_x10 - a function that prints 10 times the alphabet,
  *	in lowercase, followed by a new line.
  *
  * Return: Always 0 (success)
  *
  */
void print_alphabet_x10(void)
{
	int j, i;

		for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			char c = 'a' + j;

			_putchar(c);
		}
		_putchar('\n');
	}
}
