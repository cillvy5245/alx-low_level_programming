#include "main.h"
#include <stdio.h>

/**
  * print_numbers - a function that prints the numbers,
  *	from 0 to 9, followed by a new line.
  *	Prototype: void print_numbers(void);
  *	You can only use _putchar twice in your code
  *
  *
  * Return: Always 0.
  */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar(c + '0' );

			c++;
	}

	_putchar('\n');
}
