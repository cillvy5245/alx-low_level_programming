#include "main.h"

/**
  * _isupper - a function that checks for uppercase character
  *	Prototype: int _isupper(int c);
  *	Returns 1 if c is uppercase
  *	Returns 0 otherwise
  *
  *@c: is an integer
  *
  * Return: Always 0.
  *
  */

int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);

}
