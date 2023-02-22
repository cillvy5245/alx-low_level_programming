#include "main.h"

/**
  * _isalpha - a function that checks for alphabetic character.
  *	Returns 1 if c is a letter, lowercase or uppercase
  *		Returns 0 otherwise
  *
  * @c: check the character
  *
  * Return: Always 0 (success)
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		{
		return (0);
		}
}
