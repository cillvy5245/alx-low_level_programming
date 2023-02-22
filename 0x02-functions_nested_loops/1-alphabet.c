#include "main.h"

/**
  * print_alphabet - a function that prints the alphabet, in lowercase,
  *		followed by a new line.
  *
  * _putchar is only use twice in your code
  *
  * Return: Always 0 (success)
  *
  */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;


	}
		_putchar('\n');
}
