#include "main.h"

/**
  * string_toupper - a function that changes all lowercase
  *	letters of a string to uppercase.
  * @p: The string
  *
  * Return: Always 0.
  */
char *string_toupper(char *p)
{
	int k = 0;

	while (p[k])
	{
		if (p[k] >= 97 && p[k] <= 122)
		{
			p[k] -= 32;
		}

		k++;
	}

	return (p);
}

