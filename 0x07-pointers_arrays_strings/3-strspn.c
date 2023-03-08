#include "main.h"

/**
  * _strspn - a function that gets the length of a prefix substring.
  *	Prototype: unsigned int _strspn(char *s, char *accept);
  *	Returns the number of bytes in the initial segment
  *	of s which consist only of bytes from accept
  *
  *@s: is a pointer
  *@accept: is pointer
  *
  * Return: th number of bytes.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}

