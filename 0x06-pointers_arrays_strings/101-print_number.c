#include "main.h"

/**
  * print_number - a function that prints an integer.
  * @n: Number  prints
  *
  * Return: Always 0.
  */
void print_number(int n)
{
	unsigned int bom = n;

	if (n < 0)
	{
		_putchar('-');

		bom = -bom;
	}


	if ((bom / 10) > 0)
		print_number(bom / 10);

	_putchar((bom % 10) + '0');
}
