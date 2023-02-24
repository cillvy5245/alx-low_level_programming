#include "main.h"

/**
  * print_times_table - a function that prints the n times table,
  *	starting with 0.
  *	Prototype: void print_times_table(int n);
  *	If n is greater than 15 or less than 0
  *	the function
  *	should not print anything
  *
  *@n: is a variable int
  *
  * Return: Always 0.
  */
void print_times_table(int n)
{

	int a, b, c;

	if (n >= 0 && n <= 14)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;

			if (c > 99)
			{
				_putchar(',');
				_putchar(32);
				_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
				_putchar(c + '0');
			}
		}
			_putchar('\n');

	}
}
}
