#include "main.h"

/**
  * _islower - a function that checks for lowercase character
  *	Returns 1 if c is lowercase
  *	Returns 0 otherwise
  * @c: check the character
  * Return: Always 0 (success)
  *
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
		return (1);
}
	else

		return (0);
}
