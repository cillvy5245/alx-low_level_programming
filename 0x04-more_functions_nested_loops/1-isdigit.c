#include "main.h"

/**
  * _isdigit -  a function that checks for a digit (0 through 9).
  *	Prototype: int _isdigit(int c)
  *	Returns 1 if c is a digit
  *	Returns 0 otherwise
  *@c: is an integer
  *
  * Return: Always 0.
  */

int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
