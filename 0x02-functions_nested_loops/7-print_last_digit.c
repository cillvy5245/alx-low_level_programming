#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number.
  *	Prototype: int print_last_digit(int);
  *		Returns the value of the last digit
  *@k: checks the numbers
  *
  * Return: Always 0.
  */
int print_last_digit(int k)
{
	int last_num = k % 10;

	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}

