#include "main.h"

/**
  * _strpbrk - a function that searches a string for any of a set of bytes.
  *	Prototype: char *_strpbrk(char *s, char *accept);
  *
  * @s: char pointer
  * @accept: char pointer
  *
  *
  * Return: pointer
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
